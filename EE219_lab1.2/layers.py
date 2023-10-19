import numpy as np
from copy import deepcopy
from scipy.special import erf


class ReLU():

    def forward(self, inputs):
        self.inputs = deepcopy(inputs)
        # TO DO: RELU激活层的向前传播
        
        return inputs

    def setzero(self):
        pass

    def update(self, lr = 1e-10):
        pass

class GELU():
    def forward(self, inputs):
        self.inputs = inputs
        # TO DO：GELU激活层的向前传播
        # 可能使用的函数：erf

        return out


    def setzero(self):
        pass

    def update(self, lr = 1e-10):
        pass

class Softmax():
    def forward(self, inputs, axis):
        # TO DO: Softmax层的向前传播
        # 可能使用到的函数：np.max\np.exp\np.sum

        return self.out

    def setzero(self):
        pass

    def update(self, lr = 1e-10):
        pass

class flatten_layer():
    def forward(self, inputs):
        self.shape = inputs.shape
        # TO DO: 将输入数组展平，变为一维数组
        # 可能用到的函数：np.stack

        return out
    
    def update(self, lr = ''):
        pass

    def setzero(self):
        pass

class fclayer():
    def __init__(self, infeature, outfeature, bias=False, params=[], bias_params=[], name='', init = ''):
        self.infeature = infeature
        self.outfeature = outfeature
        self.bias = bias
        if list(params)!=[]:
            self.params = params
        else:
            ranges = np.sqrt(1 / infeature)
            self.params = np.random.uniform(-ranges, ranges, (infeature, outfeature))
        if bias and list(bias_params)!=[]:
            self.bias_params = bias_params
        else:
            ranges = np.sqrt(1 / infeature )
            self.bias_params = np.random.uniform(-ranges, ranges, (outfeature))
        self.params_delta = np.zeros((infeature, outfeature))
        self.bias_delta = np.zeros(outfeature)

    def forward(self, inputs):
        self.inputs = inputs
        # TO DO:全连接层的向前传播，可能用到的函数：np.matmul

        if self.bias:
            # TO DO :加入bias
        
        return output
    

    def setzero(self):
        self.params_delta[...] = 0
        if self.bias:
            self.bias_delta[...] = 0

    def update(self, lr = 1e-10):
        # self.params_delta = np.clip(self.params_delta, -6, 6)
        # self.bias_delta = np.clip(self.bias_delta, -6, 6)
        self.params -= self.params_delta * lr
        if self.bias:
            self.bias_params -= self.bias_delta * lr

    def save_model(self):
        return [self.params, self.bias_params]

    def restore_model(self, models):
        self.params = models[0]
        self.bias_params = models[1]

class layer_norm():
    def __init__(self, normalized_shape, elementwise_affine = True, gamma = [], beta = []):
        if isinstance(normalized_shape, int):
            normalized_shape = [normalized_shape]
        # axis：决定在哪一维normalized
        self.axis = None
        self.gamma = np.ones(normalized_shape)
        self.beta  = np.zeros(normalized_shape)
        
        self.elementwise_affine = elementwise_affine

        self.normalized_shape = normalized_shape
        
        if elementwise_affine and list(gamma)!=[]:
            self.gamma = gamma

        if elementwise_affine and list(beta)!=[]:
            self.beta = beta

        self.gamma_delta = np.zeros(normalized_shape).astype(np.float64)
        self.beta_delta = np.zeros(normalized_shape).astype(np.float64)
        self.ep = 1e-5

    def forward(self, inputs):
        self.inputs = deepcopy(inputs)
        self.inshape = inputs.shape
        # 决定normalized axis
        if self.axis==None:
            self.axis = np.arange(len(self.inshape) - len(self.normalized_shape), len(self.inshape))
            self.axis = tuple(list(self.axis))
            self.gamma_axis_delta = []
            for i in range(len(self.inshape)):
                if i not in self.axis:
                    self.gamma_axis_delta.append(i)
            self.gamma_axis_delta = tuple(self.gamma_axis_delta)
        # TO DO: norm层的前向传播
 
        return outputs
    
    # Bouns：补全layer_norm的反向传播
    # def backward(self, delta):

    #    return input_delta

    def setzero(self):
        self.gamma_delta[...]  = 0.0
        self.beta_delta[...] = 0.0

    def update(self, lr = 1e-10):
        if self.elementwise_affine:
            self.gamma -= self.gamma_delta * lr
            self.beta -= self.beta_delta * lr

    def save_model(self):
        return [self.gamma, self.beta]

    def restore_model(self, models):
        self.gamma = models[0]
        self.beta = models[1]

class Patch_Embed():
    def __init__(self, embed_dim, images_shape, n_patch, patchnorm=True) -> None:
        self.embed_dim = embed_dim
        n, c, h, w = images_shape
        self.h_length = h // n_patch
        self.w_length = w // n_patch
        self.n_patch  = n_patch
        self.patchnorm = patchnorm
        self.fullconnect = fclayer(self.h_length * self.w_length * c, self.embed_dim, True)
        if patchnorm:
            self.norm = layer_norm(self.embed_dim)

    def forward(self, images):
        # TO DO：PatchEmbed层的前向传播
   
        return output

    def update(self, lr):
        if self.patchnorm:
            self.norm.update(lr)
        self.fullconnect.update(lr)
    
    def setzero(self):
        if self.patchnorm:
            self.norm.setzero()
        self.fullconnect.setzero()

    def save_model(self):
        model = []
        if self.patchnorm:
            model.append(self.norm.save_model())
        model.append(self.fullconnect.save_model())
        return model

    def restore_model(self, models):
        if self.patchnorm:
            self.norm.restore_model(models[0])
        self.fullconnect.restore_model(models[-1]) 

class Positional_Encoding():
    def __init__(self, n_patch, embed_dim, fixed=False):
        self.param = np.random.normal(0, 1, (1, n_patch**2, embed_dim))
        self.param_delta = np.zeros_like(self.param)
        self.fixed = fixed
        self.posk = np.zeros((1, n_patch**2, embed_dim))
        # TO DO :计算位置编码

    def forward(self, inputs):
        # TO DO ：位置编码层的前向传播，考虑是否固定（即fixed参数）


    def update(self, lr):
        if self.fixed:
            return 
        self.param -= self.param_delta * lr

    def setzero(self):
        if self.fixed:
            return 
        self.param_delta[...] = 0

    def save_model(self):
        if self.fixed:
            return []
        return [self.param]

    def restore_model(self, models):
        if self.fixed:
            return 
        self.param = models[0]

class Transformer_Encoder():
    def __init__(self, embed_dim, num_h):
        self.embed_dim = embed_dim
        self.num_h = num_h
        self.len_single =  embed_dim // num_h

        self.norm0 = layer_norm(self.embed_dim)
        # TO DO：建立Encoder网络结构，包括norm\fc\gelu\softmax，以及计算QKV的fc层(该层请命名为QKV)
    
    def forward(self, inputs, masks = []):
        # norm
        out = self.norm0.forward(inputs)
        self.out = out
        result = []
        # TO DO :补全Encoder的向前传播
        # 包括多头注意力部分：softmax(Q*K.T/sqrt(dmodel))*v

        # 残差
        rkk = np.stack(result)
        input1 = inputs + rkk
        self.out1 = self.norm1.forward(input1)
        # MLP
        self.out1 = self.fc0.forward(self.out1)
        self.out2 = self.gelu.forward(self.out2)
        self.out3 = self.fc1.forward(self.out2)

        outrek = self.out3 + input1
        return outrek

    def update(self, lr):
        self.norm0.update(lr)
        self.norm1.update(lr)
        self.QKV.update(lr)
        self.fc0.update(lr)
        self.fc1.update(lr)

    def setzero(self):
        self.norm0.setzero()
        self.norm1.setzero()
        self.QKV.setzero()
        self.fc0.setzero()
        self.fc1.setzero()

    def save_model(self):
        return [self.norm0.save_model(), self.QKV.save_model(), self.norm1.save_model(), \
            self.fc0.save_model(), self.fc1.save_model()]

    def restore_model(self, models):
        self.norm0.restore_model(models[0])
        self.QKV.restore_model(models[1])
        self.norm1.restore_model(models[2])
        self.fc0.restore_model(models[3])
        self.fc1.restore_model(models[2*2])

class classify_layer():
    def __init__(self, embed_dim, batch, n_patch, num_classes, cls_token = True):
        self.batch = batch
        self.embed_dim = embed_dim
        self.n_patch = n_patch
        self.cls_token = cls_token
        if cls_token:
            self.fc0 = fclayer(self.embed_dim, self.embed_dim, True)
        else:
            self.fc0 = fclayer(self.embed_dim * (n_patch**2), self.embed_dim, True)
        self.relu    = ReLU()
        self.fc1 = fclayer(self.embed_dim, num_classes, True)

    def forward(self, inputs):
        # TO DO :分类层的前向传播
        return out


    def update(self, lr):
        self.fc1.update(lr)
        self.fc0.update(lr)

    def setzero(self):
        self.fc0.setzero()
        self.fc1.setzero()

    def save_model(self):
        return [self.fc0.save_model(), self.fc1.save_model()]

    def restore_model(self, models):
        self.fc0.restore_model(models[0])
        self.fc1.restore_model(models[1])

