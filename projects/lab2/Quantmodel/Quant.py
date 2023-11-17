# coding=utf-8
import numpy as np
import struct
import os
import time

class FullyConnectedLayer(object):
    def __init__(self, num_input, num_output):  # Fully connected layer initialization
        self.num_input = num_input
        self.num_output = num_output
        print('\tFully connected layer with input %d, output %d.' % (self.num_input, self.num_output))
    def init_param(self, std=0.01):  
        self.weight = np.random.normal(loc=0.0, scale=std, size=(self.num_input, self.num_output))
        self.bias = np.random.normal(loc=0.0, scale=std, size=(1, self.num_output))
    def forward(self, input ,scale, weight_quant_num_bits=8):  # forward compution
        start_time = time.time()
        self.input = input
        self.weight_quant_num_bits = weight_quant_num_bits
        # TODO : Fake-quantization of weights and biases. The quantization factor for bias is associated with that of weights
        # Fake-quantization: Quantize the data first, and then dequantize it
        # Functions that may be used: np.round, np.clip
        # hint: X*W +B ，quantize into signed int8 
        self.w_scale = _________________________ 
        self.weight = _________________________

        self.b_scale = _________________________
        self.bias = _________________________

        self.output = np.dot(self.input, self.weight) + self.bias
             
        return self.output
    def backward(self, top_diff):  
        #includes an additional pseudo-quantization step, thus requiring some adjustments to the bottom_diff
        # hint : Refer to the backward propagation of ReLU
        self.d_weight = np.matmul(self.input.T, top_diff)
        self.d_bias = np.matmul(np.ones([1,self.input.shape[0]]), top_diff)
        bottom_diff = np.matmul(top_diff, self.weight.T)
        bottom_diff = _________________________
        bottom_diff = _________________________
        return bottom_diff
    def update_param(self, lr):  
        #updata 
        self.weight = self.weight - lr*self.d_weight
        self.bias = self.bias - lr*self.d_bias
    def save_param(self):  
        #save data
        return self.weight,  self.bias,self.w_scale, self.b_scale

class ReLULayer(object):
    def __init__(self):
        print('\tReLU layer.')
    def forward(self, input):  
        self.input = input
        self.activation = np.maximum(0, self.input)
        return self.activation
    def backward(self, top_diff):  
        #ReLU layer's forward propagation, compute the output result
        bottom_diff = top_diff
        bottom_diff[self.input<0] = 0
        return bottom_diff

class SoftmaxLossLayer(object):
    def __init__(self):
        print('\tSoftmax loss layer.')
    def forward(self, input):  
        # softmax 's forward propagation, compute the output result
        input_max = np.max(input, axis=1, keepdims=True)
        input_exp = np.exp(input - input_max)
        self.prob = input_exp/(np.sum(input_exp, axis = 1, keepdims = True) )
        return self.prob

    def get_loss(self, label):   
        self.batch_size = self.prob.shape[0]  
        self.label_onehot = np.zeros_like(self.prob)
        self.label_onehot[np.arange(self.batch_size), label] = 1.0
        #Compute the cross-entropy, taking into account the normalization using batch_size
        #Note that there is a negative sign in front of the formula
        loss = -np.sum(np.log(self.prob) * self.label_onehot)/self.batch_size           
        return loss

    def backward(self):  
        bottom_diff = (self.prob - self.label_onehot)/self.batch_size
        return bottom_diff

class FakeQuant(object):    
    #FakeQuant model, fakequant input of FC layer
    def __init__(self, quant_num_bits) -> None:
        self.quant_num_bits = quant_num_bits
        pass
    def forward(self, input):
        # TODO: fakequant forward, functions that may be used: np.round, np.clip, np.max, np.abs
        self.scale = _________________________  
        self.input = _________________________
        return self.input, self.scale
    
    def backward(self,top_diff) :#Fakequant backward 
        #TODO: if value exceeds the quantized range, diff scale = 0, else diff=1
        bottom_diff = _________________________
        bottom_diff = _________________________
        bottom_diff = _________________________
        return bottom_diff
    
