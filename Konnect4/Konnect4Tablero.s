%include "macros.s"

;Implementacion analoga, pero más avanzada, de Konnect4Filas, la diferencia radica
;en que el tablero en lugar de estar dividido en 6 filas se maneja en una sola y se recorre por indices.

global _start

  section .data
    msgFila: db "Ingrese fila: ", 0, 0xa
    lenFila: equ $-msgFila
    msgColumna: db "Ingrese columna de 0 a 6: ", 0, 0xa
    lenColumna: equ $-msgColumna
    fila:  db "0 0 0 0 0 0 0", 0xa, "0 0 0 0 0 0 0", 0xa,               "0 0 0 0 0 0 0", 0xa, "0 0 0 0 0 0 0", 0xa,               "0 0 0 0 0 0 0", 0xa, "0 0 0 0 0 0 0", 0xa
    jugador: db "2", 0
    indice: db "5", 0, 0xa
    msgLleno: db "Columna llena...", 0, 0xa
    lenLleno: equ $-msgLleno
    
  section .bss
    inputColumna: resb 2
    inputFila: resb 2

  section .text

  _start:
  realVal indice
  call impresion

;Alterna el jugador entre 1 y 2
  turn:
  mov al, [jugador]
  cmp al, "1"
  je two
  cmp al, "2"
  je one

  continue:
  print msgColumna, lenColumna
  input inputColumna, 2
  realVal inputColumna

;Corrige la posicion del indice, ya que "0 0 0" ;hay espacios en las filas,asi que si se inserta en la columna 3, el valor correcto seria el 6.
  mov r9b, [inputColumna]
  mov al, 2
  mul r9
  mov r9b, al
  mov r8b, [jugador]

  for:
  mov al, [indice]
  mov r10b, 14
  mul r10b
  mov r10b, al
  add r10b, r9b
  mov al, [fila+r10]
  cmp al, "0"
  je set
  call aux

  aux:
  mov al, [indice]
  dec al
  mov [indice], al
  cmp al, 0
  jge for
  cmp al, 0
  jl columnaLlena

  set:
  mov [fila+r10], r8b
  call resetIndice
  call impresion
  jmp turn

;Imprime el tablero completo, por eso 84=14*6
  impresion:
  print fila, 84
  printNl
  ret

  columnaLlena:
  call resetIndice
  print msgLleno, lenLleno
  call impresion
  jmp continue

  resetIndice:
  mov al, 5
  mov [indice], al
  ret

  one:
  mov al, "1"
  mov [jugador], al
  jmp continue
  two:
  mov al, "2"
  mov [jugador], al
  jmp continue

  fin:
  mov rax, 60
  mov rdi, 0
  syscall