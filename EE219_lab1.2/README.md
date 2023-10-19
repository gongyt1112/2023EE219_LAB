# EE219_Lab1.2 Numpy VIT for inference(MNIST)
## Introduction：

In this lab, we will build an easy Vision Transformer(VIT) using numpy. Your job is to fill in the lines marked with "# TO DO" in Evaluate.py and layers.py. To test your program, run "Evaluate.py". It will automatically generate "xxx.csv" and the accuracy should be be close to the accuracy of the trained model if everything is good. 

+ [layers.py](https://github.com/gongyt1112/EE219_Lab/blob/main/lab0/layers.py) :neural network layers, you should complete it.

+ [Evaluate.py](https://github.com/gongyt1112/EE219_Lab/blob/main/lab0/Evaluate.py) : Evaluate the VIT model (include VIT model) with the command:

  ```python
  python Evaluate.py

+ [model](https://github.com/gongyt1112/EE219_Lab/tree/main/lab0/model) : Some models have been trained, and you can use them to evaluate whether the code you add is accurate. The following are the corresponding parameters:

  ```
  -epoch_25_loss_0.212978_pre_0.939__pf_pn_fixed.pkl
  	fixed = 1  cls_token = 0
  -epoch_28_loss_0.361867_pre_0.913__pf_pn_clstoken.pkl
  	fixed = 0  cls_token = 1
  -epoch_33_loss_0.085326_pre_0.972__pf_pn_fixed.pkl
  	fixed = 1  cls_token = 0
  ```

  

#### Bouns：

+ Complete the backward of layer_norm in layers.py.



### VIT

They split an image into fixed-size patches, linearly embed each of them, add position embeddings, and feed the resulting sequence of vectors to a standard Transformer encoder. In order to perform classification, they use the standard approach of adding an extra learnable “classification token” to the sequence. If you want to know the detailed implementation details, you can refer to the link in the Reference link.



![vit_architecture](readme_img/vit_architecture.jpg)



## Packages：

numpy ：Version: 1.24.3

scipy ：Version: 1.11.1

pandas：Version: 1.3.3

You can use the command to install these packages:

```python
pip install numpy
pip install scipy
pip install pandas
```

## Requirement:

Do not change the network structure.

Do not import extra python package.

## Submission:

Please compress `layers.py`, `Evaluate.py` and `xxx.csv` into a `zip` file with name `{StudentNumber_StudentName}_EE219_Lab1_2.zip`, and submit to Blackboard. The file structure should be like this.

```
12345678_张三_EE219_Lab1_2.zip
|-- layers.py
|-- Evaluate.py
|-- model
 	|-- xxx.csv
```



## Reference link

[An Image is Worth 16x16 Words: Transformers for Image Recognition at Scale](https://arxiv.org/pdf/2010.11929.pdf)

[详解 ViT 算法实现](https://zhuanlan.zhihu.com/p/517869710)

