%include "macros.s"

;Implementacion analoga, pero más avanzada, de Konnect4Filas, la diferencia radica
;en que el tablero en lugar de estar dividido en 6 filas se maneja en una sola y se recorre por indices.

global _start

  section .data
    msgColumna: db "Ingrese columna de 0 a 6: ", 0, 0xa
    lenColumna: equ $-msgColumna
    fila:  db "0 0 0 0 0 0 0", 0xa, "0 0 0 0 0 0 0", 0xa,               "0 0 0 0 0 0 0", 0xa, "0 0 0 0 0 0 0", 0xa,               "0 0 0 0 0 0 0", 0xa, "0 0 0 0 0 0 0", 0xa, 0
    msgGana: db "Ha ganado el jugador: ", 0
    lenGana: equ $-msgGana
    jugador: db "2", 0
    indice: db "5", 0xa, 0
    msgLleno: db "Columna llena...", 0xa, 0
    lenLleno: equ $-msgLleno
    tableroLleno: db "El tablero está lleno, terminó el juego...", 0xa, 0
    lenTableroLleno: equ $-tableroLleno
    msgNuevo: db "Desea jugar de nuevo? Y/N", 0
    lenNuevo: equ $-msgNuevo
    
  section .bss
    inputColumna: resb 2
    casillasLlenas: resb 2
    match: resb 2
    valor: resb 2
    tempPosix: resb 2
    TheChoosenJuan: resb 2

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

;Multiplica el indice por 14 (que inicia de 5 a 0) y suma la columna ingresada para determinar la posición del tableto, ej, indice 5, columna 0 daria la posición (14*5)+0 = 70, que es la esquina inferior izquierda...
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
  mov [tempPosix], r10
  call resetIndice
  call impresion
  mov al, [casillasLlenas]
  inc al
  mov [casillasLlenas], al
  call comprobarGanador

  continueSet:
  call resetMatch
  mov al, [casillasLlenas]
  cmp al, 42
  jl turn
  cmp al, 42
  print tableroLleno, lenTableroLleno
  je nuevoJuego

  resetMatch:
  mov r8b, 0
  mov [match], r8b
  ret

  comprobarGanador:
  mov rax, [tempPosix]

  izquierdaAsc:
  mov r8, izquierdaAsc
  mov r9, izquierdaDesc
  sub rax, 15
  mov r11, [fila+rax]
  mov [valor], r11b
  cmp byte [valor], 10
  je auxJump
  dec rax
  cmp rax, 0
  jge comparador
  jmp auxJump

  izquierdaDesc:
  mov r8, izquierdaDesc
  mov r9, derechaAux
  add rax, 15
  mov r11, [fila+rax]
  mov [valor], r11b
  cmp byte [valor], 10
  je auxJump
  inc rax
  cmp rax, 82
  jle comparador
  jmp auxJump

  derechaAux:
  call resetMatch

  derechaAsc:
  mov r8, derechaAsc
  mov r9, derechaDesc
  sub rax, 13
  mov r11, [fila+rax]
  mov [valor], r11b
  cmp byte [valor], 10
  je auxJump
  inc rax
  cmp rax, 12
  jge comparador
  jmp auxJump

  derechaDesc:
  mov r8, derechaDesc
  mov r9, horizontalAux
  add rax, 13
  mov r11, [fila+rax]
  mov [valor], r11b
  cmp byte [valor], 10
  je auxJump
  dec rax
  cmp rax, 70
  jle comparador
  jmp auxJump

  horizontalAux:
  call resetMatch

  horizontalIz:
  mov r8, horizontalIz
  mov r9, horizontalDer
  sub rax, 1
  mov r11, [fila+rax]
  mov [valor], r11b
  cmp byte [valor], 10
  je auxJump
  dec rax
  cmp rax, 0
  jge comparador
  jmp auxJump

  horizontalDer:
  mov r8, horizontalDer
  mov r9, verticalAux
  add rax, 1
  mov r11, [fila+rax]
  mov [valor], r11b
  cmp byte [valor], 10
  je auxJump
  inc rax
  cmp rax, 82
  jle comparador
  jmp auxJump

  verticalAux:
  call resetMatch

  verticalDesc:
  mov r8, verticalDesc
  mov r9, continueSet
  add rax, 14
  mov r11, [fila+rax]
  mov [valor], r11b
  cmp byte [valor], 10
  je auxJump
  cmp rax, 82
  jle comparador
  jmp auxJump

  comparador:
  mov bl, [fila+rax]
  push rax
  mov rax, [tempPosix]
  mov cl, [fila+rax]
  pop rax
  cmp bl, cl
  je setMatch
  cmp bl, cl
  jne auxJump
  jmp comprobarFichas

  auxJump:
  mov rax, [tempPosix]
  jmp r9

  setMatch:
  mov r11b, [match]
  inc r11b
  mov [match], r11b

  comprobarFichas:
  mov r11b, [match]
  cmp r11b, 3
  je ganador
  jmp r8

  ganador:
  print msgGana,lenGana
  print jugador, 1
  printNl

  nuevoJuego:
  xor rax, rax
  print msgNuevo, lenNuevo
  printNl
  input TheChoosenJuan, 2

  mov al, [TheChoosenJuan]
  cmp al, "Y"
  je reinicio
  cmp al, "y"
  je reinicio
  cmp al, "1"
  je reinicio

  cmp al, "N"
  je fin
  cmp al, "n"
  je fin
  cmp al, "0"
  je fin
  jmp fin

  reinicio:
  mov rax, "2"
  mov [jugador], rax
  mov rax, "5"
  mov [indice], rax
  mov rax, 0
  mov [casillasLlenas], rax
  call resetMatch
  mov rax, 82
  call nuevoTableroAux

  nuevoTableroAux:
  cmp rax, 0
  jge nuevoTablero
  jmp _start

  nuevoTablero:
  mov [fila+rax], byte "0"
  sub rax, 2
  jmp nuevoTableroAux
  
  
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