; =======================================
; task2_1
; Do not modify this file !!!
; =======================================

lui     x5,     2156920832          ; nop                           ;   0x80900000
lui     x6,     2156920832          ; nop                           ;   0x80900000

# Test for addi & sw & lui
addi    x7,     x0,     100         ; nop                           ;
addi    x9,     x6,     4           ; sw      x7,     0(x6)         ;   mem[0] = 100
addi    x7,     x0,     -100        ; nop                           ;
addi    x6,     x9,     4           ; sw      x7,     0(x9)         ;   mem[1] = -100

# Test for lw   
nop                                 ; lw      x7,     0(x5)         ;
addi    x7,     x7,     15          ; nop                           ;
addi    x9,     x6,     4           ; sw      x7,     0(x6)         ;   mem[1] = 115

# Test for add  
addi    x8,     x0,     15          ; lw      x7,     4(x5)         ;
add     x7,     x7,     x8          ; nop                           ;
addi    x6,     x9,     4           ; sw      x7,     0(x9)         ;   mem[2] = -85
addi    x8,     x0,     -15         ; lw      x7,     4(x5)         ;
add     x7,     x7,     x8          ; nop                           ;
addi    x9,     x6,     4           ; sw      x7,     0(x6)         ;   mem[3] = -115

# Test for mul 
addi    x7,     x0,     10          ; nop                           ;
addi    x8,     x0,     10          ; nop                           ;
mul     x7,     x7,     x7          ; nop                           ;
addi    x6,     x9,     4           ; sw      x7,     0(x9)         ;   mem[4] = 100

# Test for and 
addi    x7,     x0,     7           ; nop                           ;
addi    x8,     x0,     3           ; nop                           ;
and     x7,     x7,     x8          ; nop                           ;
addi    x9,     x6,     4           ; sw      x7,     0(x6)         ;

# Test for sll 
addi    x7,     x0,     1           ; nop                           ;
addi    x8,     x0,     2           ; nop                           ;
sll     x7,     x7,     x8          ; nop                           ;
addi    x6,     x9,     4           ; sw      x7,     0(x9)         ;   mem[6] = 4

# Test for slti        
addi    x7,     x0,     9           ; nop                           ;
slti    x7,     x7,     10          ; nop                           ;
addi    x9,     x6,     4           ; sw      x7,     0(x6)         ;   mem[7] = 1

addi    x7,     x0,     9           ; nop                           ;
slti    x7,     x7,     8           ; nop                           ;
addi    x6,     x9,     4           ; sw      x7,     0(x9)         ;   mem[8] = 0

# Test for blt
addi    x7,     x0,     0           ; nop                           ;
addi    x8,     x0,     4           ; nop                           ;
addi   x10,     x0,     60          ; nop                           ;
loop:
addi   x10,    x10,     1           ; nop                           ;
addi    x7,     x7,     1           ; nop                           ;
blt     x7,     x8,     loop        ; nop                           ;

addi    x7,    x10,     0           ; nop                           ;
addi    x9,     x6,     4           ; sw      x7,     0(x6)         ;   mem[9] = 64

# Test for jal
addi    x7,     x0,     50          ; nop                           ;
jal     x1,     label               ; nop                           ;
addi    x7,     x7,     1           ; nop                           ;
label:
addi    x7,     x7,     10          ; nop                           ;
addi    x6,     x9,     4           ; sw      x7,     0(x9)         ;   mem[10] = 60

# halt
halt                                ; nop                           ;
