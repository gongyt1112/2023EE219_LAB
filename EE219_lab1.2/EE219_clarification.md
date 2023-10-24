# EE219_Lab1.2 Clarification

+ ### CLS_Token:

  + After simplification, we **DON'T** need to splice it in front of tokens.  

  + When cls_token = 1, we take the first patch as the token in "def evalutate":

    ```python
    if cls_token:
    	images = layers[l].forward(images[:, 0])
    else:
    	images = layers[l].forward(images)
    ```

    so the first fc layer is differentiated in the "classify" layer:

    ```python
    if cls_token:
    	self.fc0 = fclayer(self.embed_dim, self.embed_dim, True)
    else:
    	self.fc0 = fclayer(self.embed_dim * (n_patch**2), self.embed_dim, True)
    ```

  + In the code,  you **only need** to decide whether to add the "Flatten" layer base on it when building the layer structure in "Evalutate.py" :

    ```python
    # TO DO：建立VIT模型的层结构layers，包括六个Encoder
    layers = []
    ```

    

+ ### Positional_encoding:

  $$P \in R^{n \times d}: p_{i,2j} = sin(\frac{i}{10000^{2j/d}}),p_{i,2j+1} = sin(\frac{i}{10000^{2j/d}})$$ 

+ ### Layers：

  + “epoch25” & “epoch33” model：

    |                      | INPUT SIZE       | OUTPUT SIZE   |
    | -------------------- | ---------------- | ------------- |
    | Patch_Embed          | (100, 1, 28, 28) | (100, 49, 96) |
    | Positional_Encoding  | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder1 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder2 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder3 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder4 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder5 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder6 | (100, 49, 96)    | (100, 49, 96) |
    | Layer_norm           | (100, 49, 96)    | (100, 49, 96) |
    | Flatten              | (100, 49, 96)    | (100, 4704)   |
    | Classify             | (100, 4704)      | (100, 10)     |

  + “epoch28” model:

    |                      | INPUT SIZE       | OUTPUT SIZE   |
    | -------------------- | ---------------- | ------------- |
    | Patch_Embed          | (100, 1, 28, 28) | (100, 49, 96) |
    | Positional_Encoding  | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder1 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder2 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder3 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder4 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder5 | (100, 49, 96)    | (100, 49, 96) |
    | Transformer_Encoder6 | (100, 49, 96)    | (100, 49, 96) |
    | Layer_norm           | (100, 49, 96)    | (100, 49, 96) |
    | Classify             | (100, 96)        | (100, 10)     |


​    

