%include "macros.s"
global _start

section data.
    fila:  db "1 0 0 0 0 0 2", 0xa
    fila1: db "3 0 0 0 0 0 4", 0xa
    fila2: db "5 0 0 0 0 0 6", 0xa
    fila3: db "7 0 0 0 0 0 8", 0xa
    fila4: db "9 0 0 0 0 0 x", 0xa
    fila5: db "y 0 0 0 0 0 z", 0xa

section .text
_start:
print fila+27, 1
fin:
mov rax, 60
mov rdi, 0
syscall