import sys
import random
import os
import shutil
import numpy as np

mem_path = "./mem/"
top_file = "./vsrc/sim/top.v"

if not os.path.exists(mem_path):
    os.mkdir(mem_path)

W = int(sys.argv[1])
H = int(sys.argv[2])
K = int(sys.argv[3])
C = int(sys.argv[4])
W_SIZE = int(sys.argv[5])
DEBUG = int(sys.argv[6])

MEM_SIZE = 0x5000
IMG_BASE = 0x00000000
WEIGHT_BASE = 0x00001000
IA_BASE = 0X00002000


def init_mem():
    mem_list = []
    for i in range(MEM_SIZE):
        mem_list.append(0)
    return mem_list

def write_mem(mem_list):
    mem_file = open(mem_path+'mem_init.txt', 'w')
    mem_file.seek(0)
    mem_file.truncate()
    for val in mem_list:
        mem_file.write('%06X\n'%val)
    mem_file.close()

def im2col_fun(input_data, filter_h, filter_w, stride=1, pad=0):

    N, C, H, W = input_data.shape
    out_h = (H + 2*pad - filter_h)//stride + 1
    out_w = (W + 2*pad - filter_w)//stride + 1

    img = np.pad(input_data, [(0,0), (0,0), (pad, pad), (pad, pad)], 'constant')
    col = np.zeros((N, C, filter_h, filter_w, out_h, out_w), dtype='int')

    for y in range(filter_h):
        y_max = y + stride*out_h
        for x in range(filter_w):
            x_max = x + stride*out_w
            col[:, :, y, x, :, :] = img[:, :, y:y_max:stride, x:x_max:stride]

    col = col.transpose(0, 4, 5, 1, 2, 3).reshape(N*out_h*out_w, -1)
    return col.T


def main():
    pad = 0
    stride = 1
    out_h = (H + 2*pad - W_SIZE)//stride + 1
    out_w = (W + 2*pad - W_SIZE)//stride + 1
    M = out_h*out_w
    N = W_SIZE * W_SIZE
    image = []
    im2col = []
    mem_list = init_mem()
    # print("M,N,K,C:")
    # print([M,N,K,C])

    # print('\nimage:')
    for a in range(C):
        channel = []
        for i in range(H):
            row = []
            for j in range(W):
                val = random.randint(0, 255)
                # val = i * W + j
                row.append(val)
                mem_list[IMG_BASE + a * H * W + i * W + j] = val
                # print("%02X "%val, end='')
            channel.append(row)
            # print('')
        image.append(channel)
        # print('')

    image_arr = np.array(image).reshape(1, C, H, W)
    col = im2col_fun(image_arr, W_SIZE, W_SIZE, pad=pad,stride=stride)
    im2col = col.tolist()

    
    # print('\nim2col:')
    for i in range(N*C):
        for j in range(M):
            # print("%02X"%im2col[i][j], end=' ')
            mem_list[IA_BASE + j * N * C +i] = im2col[i][j]
        # print('')

    # print('\nweight:')
    for a in range(C):
        for i in range(K):
            for j in range(N):
                val = random.randint(0, 255)
                # val = i
                mem_list[WEIGHT_BASE +a * K * N + i * N +j] = val
        #         print("%02X"%val,end=' ')
        #     print('')
        # print('')
    write_mem(mem_list)


    modify_testbench()

def modify_testbench():
    f_testbench = open(top_file, "r+")
    testbench = f_testbench.read().split('\n')
    testbench[1] = '`define W ' + str(W)
    testbench[2] = '`define H ' + str(H)
    testbench[3] = '`define K ' + str(K)
    testbench[4] = '`define C ' + str(C)
    testbench[5] = '`define W_SIZE ' + str(W_SIZE)
    testbench[6] = '`define DEBUG ' + str(DEBUG)

    f_testbench.seek(0)
    f_testbench.write("\n".join(testbench))
    f_testbench.close()

if __name__ == '__main__':
    main()