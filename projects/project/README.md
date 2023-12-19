# EE219-Final-Project

## Environment

> NOTE: Make sure the docker-image has the gcc-riscv64-linux-gnu tool !!!
>
> You can use the command to check if there is the gcc-riscv64-linux-gnu tool.
> ```bash
> riscv64-linux-gnu-gcc --help
>```
> If there is no gcc-riscv64-linux-gnu tool, you can update the image or install it manually.
>
> You can update docker-image.
> ```bash
> docker pull zhangshen777/ics-ubuntu
> ```
>
> Or, you can also install the required packeages in the old docker image by the following commands.
>
> ```bash
> su
> sudo apt-get update -y
> sudo apt-get install -y gcc-riscv64-linux-gnu
> ```

## Introduction

This project is designed to allow you to practice what you have learned in this course. Through this project, students can actually design a valuable intelligent computing system, including model training, model quantification, hardware design, operator and algorithm development. Of course, due to time constraints, this project has been simplified to reduce the difficulty appropriately, but this does not prevent you from going more deeply into a particular direction according to your interests. Just enjoy it !

## Project Goal

The goal of this project is to design an intelligent computing system which is able to accelerate the Vision-Transformer (ViT) model. This system is divided into 3 levels, neural network model, hardware platform, and application software.

1. Neural networks (Optional): You can finish the complete code of ViT model or optimize the nonlinear layers, considering the hardware-implement. `(TA has finished the task.)`
2. Hardware platform: You need to design a custom hardware computing platform to accelerate your neural network model.
3. Application software: You need to use c + inline assembly to build the neural network arithmetic library and complete the corresponding software on your customized computing platform to make your neural network work for real.

To reduce the difficulty, you are only required to deploy the core modules (QKV-Attention) of ViT model, which only includes MAC operations, Softmax operations and Matrix-Multiplication operations. 
Besides, we have provided you with a simple single-cycle RV-CPU supporting RV64I instructions.

If you wish to do better, you can explore these directions.

1. try to accelerate the whole ViT model, which needs to extend python code of the ViT model.
2. try to optimize the non-linear layers in ViT model, including Gelu, LayerNorm and Softmax.
3. try to consider the quantization of ViT model.
4. try to build your own processor that supports all RV64I instruction sets.
5. try to add more instruction sets to the processor including RV64F, RV64V, and etc.

## Detailed Task

### Neural-Networks

Actually, we have created the core part (QKV-Attention) of ViT model (`./tool/ViT.py`). To reduce the difficulty, the weights are random integer values with 8 bits. Meanwhile, considering the complexity of non-linear layer (softmax), we use the `argmax` to replace the softmax. As the ViT model can support different input size and different patch size, you'd better support as more types as possible. If you are struggled to finish all the models, you must accomplish the `ViT_toy` with `input-size=86` and `pathch-size=32` as least. You can select the model type in `./tool/model.py`, which can generate the binary image file used in hardware simulation. 

### Hardware-Platform

Our hardware platform uses the RISV processor architecture and supports all instructions of RV64I and some customized vector instructions. A single-cycle scalar processor core supporting RV64I has been implemented and is available for you to use directly. But the source code of this scalar processor core is obfuscated. And the vector processor part of the hardware platform is the focus of your design. You can embed a custom accelerator into the ALU of the vector processor, considering the large access bandwidth of the vector processor.

This project does not require too much instruction for the vector processor, you can even use the code of the previsou lab with simple modifications. But in order to be able to control the accelerator, you will need to add a few custom vector instructions.

As for the accelerator design, this project does not restrict the accelerator architecture, but you need to give a reasonable enough reason for the architecture. These cases are not allowed, such as using too many registers in the accelerator, using too many arithmetic units in the accelerator, etc. In short, your accelerator needs to be as efficient as possible while matching the access bandwidth to the bandwidth.

### Application-Software

Since the architecture of our intelligent computing system is processor-based, we need software to control the processor to work the way we want it to. After completing the first two parts, you need to build the operator library to support the specific computation of the neural network. Here, you can use mainly c to do this. But for the parts that involve vector instructions (including custom instructions), you need to use inline assembly to do this. For both cases, we provide sample programs.

## Special Requirements


To run the python code, you need to activate the python-environment `torch`.

>```python
> conda activate torch
>```

The frequent used commands are as follows.

>
>```bash
>make run CFILE=demo
>```

> !!! Floating-point operations are not supported !!! You can not use the `float` in the `c` codes.


## Score

The final specific scoring criteria will be released later.

* Report (30%)
* Code (60%)
* Competition (10%)

## Submission

Using the make command to export the git log file and pack up tha lab3 folder. You will get the compressed file `project.tar.gz` in `ICS/projects`.

```
make pack
```

Please compress `project.tar.gz` and the report into a `zip` file with the name `{StudentNumber_StudentName}_EE219_Project.zip`, and submit to Blackboard. The file structure should be like this.

```
12345678_张三_EE219_Project.zip
|-- report.pdf
|-- presentation.ppt/pdf
|-- project.tar.gz
```
