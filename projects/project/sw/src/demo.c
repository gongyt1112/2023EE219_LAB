#include "trap.h"
#include "model.h"

#define ADDR_A      ADDR_FEAT
#define ADDR_B      ADDR_QW
#define ADDR_C      ADDR_SAVE

int main() {
    int i ;
    int8_t *p_A = (int8_t *)ADDR_A ;
    int8_t *p_B = (int8_t *)ADDR_B ;
    int32_t *p_C = (int32_t *)ADDR_C ;

    // Access-Matrix-Method-1 (recommended)
    for (i=0; i<16; i++) {
        int8_t data = p_A[i];
        printf("%d\t",data);
    }
    printf("\n");

    // Access-Matrix-Method-2
    for (i=0; i<16; i++) {
        int8_t data = *(p_B+i);
        printf("%d\t",data);
    }
    printf("\n");

    // Write Data Back to Memory
    int8_t data_A, data_B;
    int32_t data_C ;
    for( i=0; i<16;  i++ ){
        data_A = i ;
        data_B = i+1 ;
        data_C = data_A * data_B ;
        p_C[i] = data_C ;
    }

    // Re-Read Data From Memory
    for (i=0; i<16; i++) {
        int32_t data = *(p_C+i);
        printf("%d\t",data);
    }

    return 0;
}
