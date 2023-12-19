from ViT import QKVCore, Config
import numpy as np

# !!! IMPORTANT !!!
# set DEBUG=True means that the feature & parameters are fixed !!!
DEBUG = True

def export_bin(filename, data_bytes):
    with open(filename, "wb") as f:
        f.write(data_bytes)

def process( config ):
    # perform the inference
    core = QKVCore( config )
    feature = config.rng.randint( -2**7, 2**7, config.feature_size, np.int32 )
    result_golden = core( feature )
    print( f"feature-shape = {feature.shape}")
    print( f"result-shape  = {result_golden.shape}")
    
    core_weights = core.all_weight
    core_bias = core.all_bias
    print( f"weight-shape  = {core_weights.shape}")
    print( f"bias-shape    = {core_bias.shape}")

    # save the feature & golden result & parameters to npy-file
    np.save( "../data/npy/input.npy", feature )
    np.save( "../data/npy/result.npy", result_golden )
    np.save( '../data/npy/weight.npy', core_weights )
    np.save( '../data/npy/bias.npy', core_bias )
    
    # save the feature & parameters into bin-file
    byte_feature = bytes( np.array(feature, dtype=np.int8) )
    byte_weight = bytes( np.array(core_weights, dtype=np.int8) )
    byte_bias = bytes( np.array(core_bias, dtype=np.int8) )
    byte_all = bytes( byte_feature + byte_weight + byte_bias )
    export_bin( "../data/bin/data.bin", byte_all )
    
    print( f"The length of byte_all is {len(byte_all)}" )

    
def main():
    config = Config( DEBUG=DEBUG ) 
    option_list = [
        ( config.set_ViT_large, 384, 16 ),
        ( config.set_ViT_large, 224, 16 ),
        
        ( config.set_ViT_base, 384, 16 ),
        ( config.set_ViT_base, 224, 16 ),
        ( config.set_ViT_base, 384, 32 ),
        ( config.set_ViT_base, 224, 32 ),
        
        ( config.set_ViT_small, 384, 16 ),
        ( config.set_ViT_small, 224, 16 ),
        ( config.set_ViT_small, 384, 32 ),
        ( config.set_ViT_small, 224, 32 ),
        
        ( config.set_ViT_tiny, 384, 16 ),
        ( config.set_ViT_tiny, 224, 16 ),
        ( config.set_ViT_tiny, 384, 32 ),
        ( config.set_ViT_tiny, 224, 32 ),
        
        ( config.set_ViT_toy, 384, 16 ),
        ( config.set_ViT_toy, 224, 16 ),
        ( config.set_ViT_toy, 384, 32 ),
        ( config.set_ViT_toy, 224, 32 ),
        
        ( config.set_ViT_toy, 96, 32 ),
    ]
    
    option = option_list[-1]
    # config.set_ViT_tiny( input_size=224, patch_size=16 )
    option[0]( input_size=option[1], patch_size=option[2] )
    
    # generate the test-case
    process( config )

if __name__=='__main__':
    print( "============================================" )
    main()
    print( "============================================" )
