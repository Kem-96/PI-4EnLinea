
%include "Connect4.s"

global _start

section .bss
opcion resb 1
contador resb 1

section .data
msg: db "---Menu---", 0xa, "1. Comenzar Juego.", 0xa, "2. Integrantes.", 0xa, "3. Reglas del Juego.", 0xa, "4. Salir.", 0xa
len: equ $-msg

msg1: db "Digite una opcion: "
len1: equ $-msg1

reglas: db "Las reglas del juego consisten en que cada jugador coloca una ficha en la columna que desee hasta que 1 de 2 opciones se cumplan: ", 0xa, "[1]Cualquiera de los jugadores gane.", 0xa, "[2]El tablero se llene.",0xa, "La ficha se va a colocar en la primera posicion sin ocupar, de abajo hacia arriba.", 0xa
reglas_len: equ $-reglas

integrantes: db "---Integrantes---", 0xa, "Nathan Murillo (B95506)", 0xa, "Rodrigo Mendoza (C04813)", 0xa, "Kembly Paniagua (B95822)", 0xa,  "Isaac Vargas (C08195)", 0xa
lenInte: equ $-integrantes

volver: db "Digite [5] para volver al menu.", 0xa
lenVolver: equ $-volver

cln: db 0xa," ", 0xa
lenCln: equ $ - cln

section .text
_start:
call menu
exit

;-------------------------SUBRUTINAS---------------------------------------------
menu:
  print msg, len
  print msg1, len1

  input opcion, 2
  printNl
  ind r8, opcion

  call compares
  ret

;compara la opcion digitada con varios numeros
compares:
  cmp al, 1 ;salto a inicio, opcion 1
  je inicio

  cmp al, 2
  je companeros ;salto a integrantes, opcion 2

  cmp al, 3
  je imprimir_reglas ;salto a reglas, opcion 3
  
  cmp al, 4 ;salto a exit, opcion 4
  je salir
  ret

inicio:
call iniciar
ret

companeros:
  print integrantes, lenInte
  print volver, lenVolver
  
  input opcion, 2
  printNl
  ind r8, opcion
  
  cmp al, 5
  je menu
  ret

imprimir_reglas: 
  print reglas, reglas_len
  print volver, lenVolver

  input opcion, 2
  printNl
  ind r8, opcion
  
  cmp al, 5
  je menu
  ret

salir:
  exit

;-----------------------------------------------------------------------------------------



