; =======================================
; task3_1
; Do not modify this file !!!
; =======================================


lui         x5,     2157969408          ; nop                           ; nop                                       ;   0x80a00000

# Test for vadd.vi & vse32.v
addi        x5,     x5,     0           ; nop                           ; nop                                       ;
add         x5,     x5,     x0          ; nop                           ; vadd.vi     vx2,    vx0,    8,    1       ;
nop                                     ; nop                           ; vadd.vi     vx2,    vx0,    8,    1       ;
add         x5,     x5,     x0          ; nop                           ; vse32.v     vx2,    x5,             1     ;   mem[0][0:7]=8
addi        x5,     x5,     32          ; nop                           ; nop                                       ;

# Test for vadd.vx
addi        x7,     x0,     9           ; nop                           ; nop                                       ;
nop                                     ; nop                           ; vadd.vx     vx3,    vx0,    x7,     1     ;
nop                                     ; nop                           ; vse32.v     vx3,    x5,             1     ;   mem[1][0:7]=9
addi        x5,     x5,     32          ; nop                           ; nop                                       ;

# Test for vadd.vv
nop                                     ; nop                           ; vadd.vv     vx2,    vx2,    vx3,    1     ;
nop                                     ; nop                           ; vse32.v     vx2,    x5,             1     ;   mem[2][0:7]=17

# Test for vle32.v
nop                                     ; nop                           ; vadd.vv     vx2,    vx2,    vx0,    1     ;
nop                                     ; nop                           ; vle32.v     vx2,    x5,             1     ;
addi        x5,     x5,     32          ; nop                           ; nop                                       ; 
nop                                     ; nop                           ; vadd.vv     vx2,    vx2,    vx3,    1     ;
nop                                     ; nop                           ; vse32.v     vx2,    x5,             1     ;   mem[4][0:7]=26
addi        x5,     x5,     32          ; nop                           ; nop                                       ; 

# Test for vmul.vi
nop                                     ; nop                           ; vadd.vi     vx2,    vx0,    1,      1     ;
nop                                     ; nop                           ; vmul.vi     vx2,    vx2,    13,     1     ;
nop                                     ; nop                           ; vse32.v     vx2,    x5,             1     ;   mem[5][0:7]=13
addi        x5,     x5,     32          ; nop                           ; nop                                       ; 

# Test for vmul.vx
nop                                     ; nop                           ; vadd.vi     vx2,    vx0,    1,      1     ;
addi        x7,     x0,     7           ; nop                           ; nop                                       ; 
nop                                     ; nop                           ; vmul.vx     vx2,    vx2,    x7,     1     ;
nop                                     ; nop                           ; vse32.v     vx2,    x5,             1     ;   mem[5][0:7]=7
addi        x5,     x5,     32          ; nop                           ; nop                                       ; 

# Test for vmul.vv
nop                                     ; nop                           ; vadd.vi     vx2,    vx0,    10,     1     ;
nop                                     ; nop                           ; vadd.vi     vx3,    vx0,    10,     1     ;
nop                                     ; nop                           ; vmul.vv     vx2,    vx2,    vx3,    1     ;
nop                                     ; nop                           ; vse32.v     vx2,    x5,             1     ;   mem[5][0:7]=100
addi        x5,     x5,     32          ; nop                           ; nop                                       ; 
halt                                    ; nop                           ; nop                                       ;