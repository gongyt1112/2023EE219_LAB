import sys
import os
from turtle import width
import numpy as np

IMG_BASE = 0x00000000
WEIGHT_BASE = 0x00001000
IM2COL_BASE = 0x00002000
OUTPUT_BASE = 0x00003000

mem_file1 = './mem/mem_init.txt'
mem_file2 = './mem/mem_out.txt'

W = int(sys.argv[1])
H = int(sys.argv[2])
K = int(sys.argv[3])
C = int(sys.argv[4])
W_SIZE = int(sys.argv[5])

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

def matmul(A, B):
    K = len(A)
    N = len(B)
    M = len(B[0])
    C = []
    for i in range(K):
        row = []
        for j in range(M):
            val = 0
            for k in range(N):
                val += A[i][k] * B[k][j]
            row.append(val)
        C.append(row)
    return C

def main():
    pad = 0
    stride = 1
    out_h = (H + 2*pad - W_SIZE)//stride + 1
    out_w = (W + 2*pad - W_SIZE)//stride + 1
    M = out_h*out_w
    N = W_SIZE * W_SIZE

    if not os.path.exists(mem_file2):
        print("NO OUTPUT")
        os.system('echo FAIL > mem/status')

    f1 = open(mem_file1, 'r')
    f2 = open(mem_file2, 'r')
    mem = f1.readlines()
    mem_out = f2.readlines()
    weight = []
    image = []
    im2col = []
    output = []
    print('M:', M)
    print('N:', N)
    print('K:', K)
    
    print('\nweight:')
    for a in range(C):
        weight_k = []
        for i in range(K):
            row = []
            for j in range(N):
                val = int(eval('0x'+mem[WEIGHT_BASE +a * K * N + i * N +j].strip()))
                row.append(val)
                print("%02X "%val, end='')
            print('')
            weight_k.append(row)
        print('')
        weight.append(weight_k)

    print('\nimage:')
    for a in range(C):
        image_k = []
        for i in range(H):
            row = []
            for j in range(W):
                val = int(eval('0x'+mem[IMG_BASE + a * H * W + i * W + j].strip()))
                row.append(val)
                print("%02X "%val, end='')
            print('')
            image_k.append(row)
        print('')
        image.append(image_k)

    print('\nim2col:')
    for i in range(N*C):
        row = []
        for j in range(M):
            val = int(eval('0x'+mem_out[IM2COL_BASE + j * N * C + i].strip()))
            row.append(val)
            print("%02X "%val, end='')
        print('')
        im2col.append(row)
    
    image_arr = np.array(image).reshape(1, C, H, W)
    col = im2col_fun(image_arr, W_SIZE, W_SIZE, pad=pad,stride=stride)
    im2col_groundtruth = col.tolist()
    print("——————————————————————————————————")
    print("——————————————————————————————————")

    print('\noutput:')
    for i in range(K):
        row = []
        for j in range(M):
            val = int(eval('0x'+mem_out[OUTPUT_BASE + i + j * K].strip()))
            row.append(val)
            print("%06X "%val, end='')
        print('')
        output.append(row)
    
    groundtruth = []
    
    # print("\nC_truth:")
 
    C_weight = []
    for i in range(K):
        row = []
        for a in range(C):
            row += weight[a][i]
        C_weight.append(row)

    groundtruth = matmul(C_weight,im2col_groundtruth)

    print('\ngroundtruth:')
    for i in range(K):
        for j in range(M):
            print("%06X "%groundtruth[i][j], end='')
        print('')
    
    f1.close()
    f2.close()
    
    print("###############")
    if (output == groundtruth):
        print("Congratulate!")
        os.system('echo "PASS" > mem/status')
    else:
        print("Fail")
        os.system('echo FAIL > mem/status')
    print("###############")
    
if __name__ == '__main__':
    main()
