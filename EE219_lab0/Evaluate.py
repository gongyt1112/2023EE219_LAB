import os
from layers import * 
import numpy as np
import pickle

import pandas as pd
from copy import deepcopy

abspath = os.path.abspath(__file__)
filename = abspath.split(os.sep)[-1]
abspath = abspath.replace(filename, "")

def VIT_model(num_classes,batchsize,embed_dim,n_patch,patchnorm,fixed,cls_token):

    images_shape = (batchsize, 1, 30-2, 30-2)

    num_h = [2*2] * 6 #[3, 6, 12, 3, 6, 12]

    if patchnorm:
        choose = "_pn"
    if fixed:
        choose += "_fixed"
    if cls_token:
        choose += "_clstoken"
    
    # TO DO：建立VIT模型的层结构layers，包括六个Encoder
    layers = []
    
    if os.path.exists(pretrained_model):
        with open(pretrained_model, 'rb') as obj:
            models = pickle.load(obj)
        cnt = 0
        for l in layers:
            k = dir(l)
            if 'restore_model' in k and 'save_model' in k:
                l.restore_model(models[cnt])
                cnt += 1
        print('Model import completed')
    for l in layers:
        k = l.__class__.__name__
        if k=="layer_batchnorm":
            l.train = False
    return layers

def cross_entropy_loss(predict:np.ndarray, label:np.ndarray):
    p_shift = predict - np.max(predict, axis = -1)[..., np.newaxis]   # avoid too large in exp 
    softmax = np.exp(p_shift) / np.sum(np.exp(p_shift), axis = -1)[:, np.newaxis]
    loss = -np.sum(label * np.log(softmax + 1e-10)) / predict.shape[0] #avoid log(0)
    partial = (softmax - label) / predict.shape[0]
    return loss, partial, softmax

def load_data(data_folder):
    files = ['train-labels-idx1-ubyte', 'train-images-idx3-ubyte', 't10k-labels-idx1-ubyte',
             't10k-images-idx3-ubyte']
    
    data_folder = os.path.join(abspath,data_folder)
    paths = []
    for fname in files:
        paths.append(os.path.join(data_folder, fname))


    # Read the data for each folder
    with open(paths[0], 'rb') as lbpath:
        y_train = np.frombuffer(lbpath.read(), np.uint8, offset=8)

    with open(paths[1], 'rb') as imgpath:
        x_train = np.frombuffer(imgpath.read(), np.uint8, offset=16).reshape(len(y_train), 784)

    with open(paths[2], 'rb') as lbpath:
        y_test = np.frombuffer(lbpath.read(), np.uint8, offset=8)

    with open(paths[3], 'rb') as imgpath:
        x_test = np.frombuffer(imgpath.read(), np.uint8, offset=16).reshape(len(y_test), 784)

    return x_train, y_train, x_test, y_test

def evaluate(layers,batchsize,cls_token,data_folder):
    x_train_gz, y_train_gz, x_test_gz, testlabel = load_data(data_folder)

    testdata = np.zeros([10000, 28, 28]).astype(np.float32)

    for i in range(x_test_gz.shape[0]):
        re = x_test_gz[i, :].reshape(28, 28)
        testdata[i, :, :] = re

    print('Data loading complete')

    testdata = testdata/255

    
    #one-hot
    test_label = np.zeros((len(testlabel), 10))
    test_label[range(len(testlabel)), testlabel] = 1
    test_l = testlabel.copy()
    testlabel = test_label.copy()

   
    dic = {i:0 for i in range(10)}
    acc = 0
    length = 0
    num = len(testdata)//(batchsize)
    for j in range(num):
        images = testdata[j*batchsize:(j+1)*batchsize, :, :]
        images = images[:, np.newaxis, :, :]
        label = testlabel[j*batchsize:(j+1)*batchsize, :]
        label_single = test_l[j*batchsize:(j+1)*batchsize]
        if len(images)==0:
            break
        for l in range(len(layers)):
            kl = dir(layers[l])
            if '__name__' in kl and 'layer_batchnorm' in layers[l].__name__():
                layers[l].train = False
            if isinstance(layers[l], classify_layer):
                if cls_token:
                    images = layers[l].forward(images[:, 0])
                else:
                    images = layers[l].forward(images)
            else:
                images = layers[l].forward(images)
        loss, delta, predict = cross_entropy_loss(images, label)
        p = np.argmax(predict, axis=-1)
        length += len(label_single)
        acc += np.sum(label_single==p)
        
        for ij in range(len(p)):
            if p[ij]==label_single[ij]:
                dic[p[ij]] += 1

        dict = {}
        for key, value in dic.items():
            label_g = np.array(test_l, dtype = np.int32)
            dict[key] = value / np.sum(label_g==int(key))
        precision = acc / length
        name = pretrained_model.replace(".pkl", "_evalall.csv")
        dict['precision'] = precision
        df = pd.DataFrame(dict, index=np.arange(1)).T
    df.to_csv(name, index=True)
    print(df)

if __name__ =="__main__":
    savepath = abspath
    # TO DO：请改变测试模型，将model文件夹里的模型全部测试一遍以评估
    pretrained_model = r'model/epoch_25_loss_0.212978_pre_0.939__pf_pn_fixed.pkl'
    pretrained_model = os.path.join(abspath,pretrained_model)
    data_folder = r'data'
    batchsize = 100
    embed_dim = 96
    n_patch = 7
    # TO DO: 同时记得改变此处参数：
    patchnorm = True
    fixed     = 1 
    cls_token = 0
    
    VIT = VIT_model(10,batchsize,embed_dim,n_patch,patchnorm,fixed,cls_token)
    evaluate(VIT,batchsize,cls_token,data_folder)