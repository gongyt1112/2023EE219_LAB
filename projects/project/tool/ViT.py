import numpy as np 

class Config():
    def __init__(self, DEBUG=True) -> None:
        self.set_ViT_base( input_size=328, patch_size=16 )
        self.DEBUG = DEBUG
        self.random_generator()
    
    def random_generator( self ):
        if self.DEBUG:
            rng = np.random.RandomState(0)
        else:
            rng = np.random
        self.rng = rng
    
    def set_model(self, patch_size, num_heads, input_size, embed_dim, depth):
        self.patch_size = patch_size
        self.num_heads  = num_heads
        self.input_size = input_size
        self.embed_dim  = embed_dim
        self.depth      = depth
        
        num_row = int((self.input_size/self.patch_size) ** 2) + 1
        num_col = self.embed_dim
        self.feature_size = ( num_row, num_col )
        self.split_len = int(self.embed_dim / self.num_heads)
    
    def set_ViT_large( self, input_size, patch_size):
        self.set_model( patch_size=patch_size, input_size=input_size,
                       num_heads=16, embed_dim=1024, depth=24 )
    
    def set_ViT_base( self, input_size, patch_size):
        self.set_model( patch_size=patch_size, input_size=input_size,
                       num_heads=12, embed_dim=768, depth=12 )
    
    def set_ViT_small( self, input_size, patch_size):
        self.set_model( patch_size=patch_size, input_size=input_size,
                       num_heads=6, embed_dim=384, depth=12 )
    
    def set_ViT_tiny( self, input_size, patch_size):
        self.set_model( patch_size=patch_size, input_size=input_size,
                       num_heads=3, embed_dim=192, depth=12 )
        
    def set_ViT_toy( self, input_size, patch_size ):
        self.set_model( patch_size=patch_size, input_size=input_size,
                       num_heads=3, embed_dim=96, depth=12 ) 

    def __all_options( self ):
        self.set_ViT_large( input_size=384, patch_size=16 )
        self.set_ViT_large( input_size=224, patch_size=16 )
        
        self.set_ViT_base( input_size=384, patch_size=16 )
        self.set_ViT_base( input_size=224, patch_size=16 )
        self.set_ViT_base( input_size=384, patch_size=32 )
        self.set_ViT_base( input_size=224, patch_size=32 )

        self.set_ViT_small( input_size=384, patch_size=16 )
        self.set_ViT_small( input_size=224, patch_size=16 )
        self.set_ViT_small( input_size=384, patch_size=32 )
        self.set_ViT_small( input_size=224, patch_size=32 )
        
        self.set_ViT_tiny( input_size=384, patch_size=16 )
        self.set_ViT_tiny( input_size=224, patch_size=16 )
        self.set_ViT_tiny( input_size=384, patch_size=32 )
        self.set_ViT_tiny( input_size=224, patch_size=32 )

        self.set_ViT_toy( input_size=384, patch_size=16 )
        self.set_ViT_toy( input_size=224, patch_size=16 )
        self.set_ViT_toy( input_size=384, patch_size=32 )
        self.set_ViT_toy( input_size=224, patch_size=32 )
        
        self.set_ViT_toy( input_size=96, patch_size=32 )

def RoundShift( x, n ): 
    assert n>0, KeyError('n must be larger than 0')
    return ((x >> (n - 1)) + 1) >> 1

class Softmax():
    def __init__(self):
        pass 
    
    def __call__(self, x):
        return self.forward( x )
    
    def forward_origin( self, x ):
        result = np.exp(x) / np.sum(np.exp(x), axis=1, keepdims=True)
        return result 
    
    def forward_stable( self, x ):
        x_max = np.max(x, axis=1, keepdims=True)
        x_exp = np.exp(x - x_max)
        x_sum = np.sum(x_exp, axis=1, keepdims=True)
        result =  x_exp / x_sum
        return result 
    
    def forward( self, x ):
        return self.forward_stable( x )
        # return self.forward_origin( x )

class FakeSoftmax():
    def __init__(self):
        pass 
    def __call__(self, x):
        return self.forward( x )
    
    def forward( self, x ):
        max_indices = np.argmax(x, axis=1)
        result = np.zeros_like( x )
        for row,col in enumerate( max_indices ):
            result[ row,col ] = 1
        return result

class Linear():
    def __init__(self, weight_size, bias_size, output_width=8, input_width=8, weight_width=8, bias_width=16, round_width=8):
        self.weight_size = weight_size
        self.bias_size = bias_size
        self.output_width = output_width
        self.input_width = input_width
        self.weight_width = weight_width
        self.bias_width = bias_width
        self.round_width = round_width

    def __call__(self, x):
        return self.forward( x )
    
    def initialize( self, weight, bias ):
        self.weight = weight
        self.bias = bias 
    
    def forward( self, x ):
        result = np.matmul( x, self.weight ) + self.bias 
        result_shift = RoundShift( result, self.round_width )
        result_clamp = np.clip( result_shift, -2**(self.output_width-1), 2**(self.output_width-1)-1 )
        return result_clamp 

class MatMul(  ):
    def __init__(self, output_width=8, input_width=8, en_round=True ):
        self.output_width = output_width
        self.input_width = input_width
        self.en_round = en_round

    def __call__(self, x, y):
        return self.forward( x, y )
    
    def forward( self, x, y ):
        result = np.matmul( x, y )
        result = result.astype(np.int32)
        if self.en_round:
            result_shift = RoundShift( result, ( self.input_width*2-self.output_width ) )
        else:
            result_shift = result
        result_clamp = np.clip( result_shift, -2**(self.output_width-1), 2**(self.output_width-1)-1 )
        return result_clamp 

class QKVCore():
    def __init__(self, config) -> None:
        self.config = config
        self.__dict__.update( config.__dict__ )
        
        self.proj_q = Linear( weight_size=(self.embed_dim, self.embed_dim), bias_size=self.feature_size, 
                             output_width=8, input_width=8, weight_width=8, bias_width=8, round_width=( 8 ) )
        
        self.proj_k = Linear( weight_size=(self.embed_dim, self.embed_dim), bias_size=self.feature_size, 
                             output_width=8, input_width=8, weight_width=8, bias_width=8, round_width=( 8 ) )
        
        self.proj_v = Linear( weight_size=(self.embed_dim, self.embed_dim), bias_size=self.feature_size, 
                             output_width=8, input_width=8, weight_width=8, bias_width=8, round_width=( 8 ) )
        
        self.matmul_1 = MatMul( en_round=True )
        self.softmax = FakeSoftmax(  )
        self.matmul_2 = MatMul( en_round=False )
        
        self.initialize()

    def __call__(self, x):
        return self.forward( x )

    def generate_param( self, ):
        rng = self.config.rng
        weight = rng.randint( -2**7, 2**7, (self.embed_dim, self.embed_dim), np.int8 )
        bias = rng.randint( -2**7, 2**7, self.feature_size, np.int8 )
        return weight, bias  
    
    def initialize( self, ):
        q_w, q_b = self.generate_param(  )
        self.proj_q.initialize( q_w, q_b )
        k_w, k_b = self.generate_param(  )
        self.proj_k.initialize( k_w, k_b )
        v_w, v_b = self.generate_param(  )
        self.proj_v.initialize( v_w, v_b )
        self.all_weight = np.array([ q_w, k_w, v_w ], dtype=np.int8)
        self.all_bias = np.array([ q_b, k_b, v_b ], dtype=np.int8)
    
    def forward( self, x ):
        q, k, v = self.proj_q(x), self.proj_k(x), self.proj_v(x)
        h_list = []
        for n in range(self.num_heads):
            q_h = q[:, n*self.split_len:(n+1)*self.split_len]
            k_h = k[:, n*self.split_len:(n+1)*self.split_len]
            v_h = v[:, n*self.split_len:(n+1)*self.split_len]
            score = self.matmul_1( q_h, k_h.T )
            score = self.softmax( score )
            h = self.matmul_2( score, v_h )
            h_list.append(h)
        h = np.concatenate( h_list, axis=1 )
        return h 


