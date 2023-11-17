# coding=utf-8
import numpy as np
import struct
import os
import time

from Quantmodel.Quant import FullyConnectedLayer, ReLULayer, SoftmaxLossLayer,FakeQuant

MNIST_DIR = "./mnist_data"
TRAIN_DATA = "train-images-idx3-ubyte"
TRAIN_LABEL = "train-labels-idx1-ubyte"
TEST_DATA = "t10k-images-idx3-ubyte"
TEST_LABEL = "t10k-labels-idx1-ubyte"

class MNIST_MLP(object):
    def __init__(self, quant_num_bits=8, batch_size=100, input_size=784, hidden1=90, hidden2=90, out_classes=10, lr=0.01, max_epoch=10, print_iter=100):
        self.batch_size = batch_size
        self.input_size = input_size
        self.hidden1 = hidden1
        self.hidden2 = hidden2
        self.out_classes = out_classes
        self.lr = lr
        self.max_epoch = max_epoch
        self.print_iter = print_iter
        self.quant_num_bits = quant_num_bits

    def load_mnist(self, file_dir, is_images = 'True'):
        # Read binary data
        bin_file = open(file_dir, 'rb')
        bin_data = bin_file.read()
        bin_file.close()
        # Analysis file header
        if is_images:
            # Read images
            fmt_header = '>iiii'
            magic, num_images, num_rows, num_cols = struct.unpack_from(fmt_header, bin_data, 0)
        else:
            # Read labels
            fmt_header = '>ii'
            magic, num_images = struct.unpack_from(fmt_header, bin_data, 0)
            num_rows, num_cols = 1, 1
        data_size = num_images * num_rows * num_cols
        mat_data = struct.unpack_from('>' + str(data_size) + 'B', bin_data, struct.calcsize(fmt_header))
        mat_data = np.reshape(mat_data, [num_images, num_rows * num_cols])
        print('Load images from %s, number: %d, data shape: %s' % (file_dir, num_images, str(mat_data.shape)))
        return mat_data

    def load_data(self):
        # preprocess the images and labels of the training and testing data in the MNIST dataset.
        print('Loading MNIST data from files...')
        train_images = self.load_mnist(os.path.join(MNIST_DIR, TRAIN_DATA), True)
        train_labels = self.load_mnist(os.path.join(MNIST_DIR, TRAIN_LABEL), False)
        test_images = self.load_mnist(os.path.join(MNIST_DIR, TEST_DATA), True)
        test_labels = self.load_mnist(os.path.join(MNIST_DIR, TEST_LABEL), False)
        self.train_data = np.append(train_images, train_labels, axis=1)
        self.test_data = np.append(test_images, test_labels, axis=1)

    def shuffle_data(self):
        # Stochastic gradient descent
        print('Randomly shuffle MNIST data...')
        np.random.shuffle(self.train_data)

    def build_model(self):  
        #keep in mind that the network structure here is different from the one used in the previous lab 1.1
        print('Building multi-layer perception model...')
        self.fq1 = FakeQuant(self.quant_num_bits)
        self.fc1 = FullyConnectedLayer(self.input_size, self.hidden1)
        self.relu1 = ReLULayer()
        self.fq3 = FakeQuant(self.quant_num_bits)
        self.fc2 = FullyConnectedLayer(self.hidden1, self.hidden2)
        self.relu2 = ReLULayer()
        self.fq5 = FakeQuant(self.quant_num_bits)
        self.fc3 = FullyConnectedLayer(self.hidden2, self.out_classes)
        self.softmax = SoftmaxLossLayer()
        self.update_layer_list = [self.fc1, self.fc2, self.fc3]

    def init_model(self):   
        print('Initializing parameters of each layer in MLP...')
        for layer in self.update_layer_list:
            layer.init_param()

    def save_model(self, param_dir):    
        #save data 
        print('Saving parameters to file ' + param_dir)
        params = {}
        params['w1'], params['b1'], params['sw1'], params['sb1']= self.fc1.save_param()
        params['w2'], params['b2'], params['sw2'], params['sb2'] = self.fc2.save_param()
        params['w3'], params['b3'], params['sw3'], params['sb3'] = self.fc3.save_param()
        np.save(param_dir, params)

    def forward(self, input):  
        input1, scale1 = self.fq1.forward(input)
        h1 = self.fc1.forward(input1,scale1)
        h1 = self.relu1.forward(h1)
        h1 , scale2= self.fq3.forward(h1)
        h2 = self.fc2.forward(h1,scale2)

        # relu2 layer
        h2 = self.relu2.forward(h2)
        h2, scale3 = self.fq5.forward(h2)
        h3 = self.fc3.forward(h2,scale3)
        prob = self.softmax.forward(h3)
        return prob

    def backward(self):  
        dloss = self.softmax.backward()
        dh3 = self.fc3.backward(dloss)
        dh3 = self.fq5.backward(dh3)
        dh2 = self.relu2.backward(dh3)
        dh2 = self.fc2.backward(dh2)
        dh2 = self.fq3.backward(dh2)
        dh1 = self.relu1.backward(dh2)
        dh1 = self.fc1.backward(dh1)
        dh1 = self.fq1.backward(dh1)

    def update(self, lr):   #updata weight and bias 
        for layer in self.update_layer_list:
            layer.update_param(lr)

    def train(self, loss_dir):
        max_batch = int(np.ceil(self.train_data.shape[0] / self.batch_size))        
        loss = np.zeros([self.max_epoch,int(np.ceil(max_batch))])
        print('Start training...')
        for idx_epoch in range(self.max_epoch):
            self.shuffle_data()
            for idx_batch in range(int(np.ceil(max_batch))):
                batch_images = self.train_data[idx_batch*self.batch_size:(idx_batch+1)*self.batch_size, :-1]
                batch_labels = self.train_data[idx_batch*self.batch_size:(idx_batch+1)*self.batch_size, -1]
                prob = self.forward(batch_images)
                loss[idx_epoch,idx_batch] = self.softmax.get_loss(batch_labels)
                self.backward()
                self.update(self.lr)
                if idx_batch % self.print_iter == 0:
                    print('Epoch %d, iter %d, loss: %.6f' % (idx_epoch, idx_batch, loss[idx_epoch,idx_batch]))
        np.save(loss_dir, loss)

def build_mnist_mlp(loss_dir='./Data/loss.npy'):  #build model
    h1, h2, e =128, 128, 5
    mlp = MNIST_MLP(hidden1=h1, hidden2=h2, max_epoch=e)
    mlp.load_data()
    mlp.build_model()
    mlp.init_model()
    mlp.train(loss_dir)
    print("Saving the training loss ...")
    mlp.save_model('./Data/mlp-%d-%d-%d-epoch.npy' % (h1, h2, e))
    return mlp
