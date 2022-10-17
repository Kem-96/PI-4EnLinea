%include "macros.s"

global _start

  section .data
    msgFila: db "Ingrese fila: ", 0, 0xa
    lenFila: equ $-msgFila
    msgColumna: db "Ingrese columna: ", 0, 0xa
    lenColumna: equ $-msgColumna
    fila:  db "0 0 0 0 0 0 0", 0, 0xa
    fila1: db "0 0 0 0 0 0 0", 0, 0xa
    fila2: db "0 0 0 0 0 0 0", 0, 0xa
    fila3: db "0 0 0 0 0 0 0", 0, 0xa
    fila4: db "0 0 0 0 0 0 0", 0, 0xa
    fila5: db "0 0 0 0 0 0 0", 0, 0xa
    jugador: db "2", 0
  section .bss
    
  section .bss
    inputColumna: resb 2
    inputFila: resb 2
  section .text

  _start:
  call impresion

;Alterna el jugador entre 1 y 2
  turn:
  mov al, [jugador]
  cmp al, "1"
  je two
  cmp al, "2"
  je one

  continue:
  print msgFila, lenFila
  input inputFila, 2
  realVal inputFila
  print msgColumna, lenColumna
  input inputColumna, 2
  realVal inputColumna

;Corrige la posicion del indice, ya que "0 0 0" ;hay espacios en las filas,asi que si se inserta en la columna 3, el valor correcto seria el 6.
  mov r9b, [inputColumna]
  mov al, 2
  mul r9
  mov r9b, al
  mov r8b, [jugador]

  mov al, [inputFila]
  cmp al, 0
  je f0
  cmp al, 1
  je f1
  cmp al, 2
  je f2
  cmp al, 3
  je f3
  cmp al, 4
  je f4
  cmp al, 5
  je f5

;Selecciona la fila, pero se puede manejar por indices, 1 fila entera son 15, son 6, el tablero mide 90 bytes. Recordemos que son bytes contiguos...
  f0:
  mov [fila+r9], r8b
  jmp impresion
  f1:
  mov [fila1+r9], r8b
  jmp impresion
  f2:
  mov [fila2+r9], r8b
  jmp impresion
  f3:
  mov [fila3+r9], r8b
  jmp impresion
  f4:
  mov [fila4+r9], r8b
  jmp impresion
  f5:
  mov [fila5+r9], r8b

;Imprime el tablero completo, por eso 90=15*6
  impresion:
  print fila, 90
  printNl

  call turn

  one:
  mov rax, "1"
  mov [jugador], rax
  jmp continue
  two:
  mov rax, "2"
  mov [jugador], rax
  jmp continue

  fin:
  mov rax, 60
  mov rdi, 0
  syscall

