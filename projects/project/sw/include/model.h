#ifndef __MODEL_H__
#define __MODEL_H__

#define ADDR_DATA           0x80800000
#define ADDR_SAVE           0x80f00000

#define FEAT_ROW_NUM        10
#define FEAT_COL_NUM        96
#define EMBED_DIM           96
#define HEAD_NUM            3
#define HEAD_LEN            EMBED_DIM/HEAD_NUM

#define MATRIX_INT8_LEN     FEAT_ROW_NUM*FEAT_COL_NUM
#define MATRIX_INT32_LEN    FEAT_ROW_NUM*FEAT_COL_NUM*4
#define WEIGHT_INT8_LEN     EMBED_DIM*EMBED_DIM
#define WEIGHT_INT32_LEN    EMBED_DIM*EMBED_DIM*4
#define BIAS_INT8_LEN       MATRIX_INT8_LEN
#define BIAS_INT32_LEN      MATRIX_INT8_LEN*4


#define ADDR_FEAT           ADDR_DATA
#define ADDR_QW             ADDR_FEAT + MATRIX_INT8_LEN
#define ADDR_KW             ADDR_QW   + WEIGHT_INT8_LEN
#define ADDR_VW             ADDR_KW   + WEIGHT_INT8_LEN
#define ADDR_QB             ADDR_VW   + WEIGHT_INT8_LEN
#define ADDR_KB             ADDR_QB   + BIAS_INT8_LEN
#define ADDR_VB             ADDR_KB   + BIAS_INT8_LEN

#define ADDR_FREE           ADDR_SAVE   + MATRIX_INT32_LEN
#define ADDR_32B_T1         ADDR_FREE   + MATRIX_INT32_LEN
#define ADDR_32B_T2         ADDR_32B_T1 + MATRIX_INT32_LEN
#define ADDR_32B_T3         ADDR_32B_T2 + MATRIX_INT32_LEN
#define ADDR_32B_T4         ADDR_32B_T3 + MATRIX_INT32_LEN
#define ADDR_32B_T5         ADDR_32B_T4 + MATRIX_INT32_LEN
#define ADDR_32B_T6         ADDR_32B_T5 + MATRIX_INT32_LEN

#define ADDR_8B_T1          ADDR_32B_T6 + MATRIX_INT8_LEN
#define ADDR_8B_T2          ADDR_8B_T1  + MATRIX_INT8_LEN
#define ADDR_8B_T3          ADDR_8B_T2  + MATRIX_INT8_LEN
#define ADDR_8B_T4          ADDR_8B_T3  + MATRIX_INT8_LEN
#define ADDR_8B_T5          ADDR_8B_T4  + MATRIX_INT8_LEN
#define ADDR_8B_T6          ADDR_8B_T5  + MATRIX_INT8_LEN
#define ADDR_8B_T7          ADDR_8B_T6  + MATRIX_INT8_LEN
#define ADDR_8B_T8          ADDR_8B_T7  + MATRIX_INT8_LEN
#define ADDR_8B_T9          ADDR_8B_T8  + MATRIX_INT8_LEN

#endif 
