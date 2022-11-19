bits 64
default rel

global inicio

section .data
	extern tablero
	extern jugador
	extern columna
	indice: db 5
	casillasLlenas: db 0
	match: db 0
	
	
	
section .bss
    valor: resb 2
    tempPosix: resb 2
    TheChoosenJuan: resb 2
	posicion: resb 2
	
section .txt
	extern imp
	extern ejemplo
	extern ExitProcess

inicio:
	call imp
	xor r8, r8
	mov r8b, [jugador]
	;add r8b, 48
	mov [jugador], r8b
	;jmp continue ;---------------------------
	call turn
	jmp continue
turn:
	mov r8b, [jugador]
	cmp r8b, 49
	je two
  
  ;cl contiene el parametro jugador...  
one:
	mov [jugador], byte 49
	ret
two:
	mov [jugador], byte 50
	ret

continue:
	xor r8, r8
	mov r8b, [jugador]
	;Desde aqui para abajo hay que seccionar el codigo...
  
  ;Corrige la posicion del indice, ya que "0 0 0" ;hay espacios en las filas,asi que si se inserta en la columna 3, el valor correcto seria el 6.
	xor r9, r9
	xor rax, rax
	mov r9b, [columna]	
	mov al, 2
	mul r9
	mov r9b, al
  
;Multiplica el indice por 14 (que inicia de 5 a 0) y suma la columna ingresada para determinar la posición del tableto, ej, indice 5, columna 0 daria la posición (14*5)+0 = 70, que es la esquina inferior izquierda...
for:
	mov al, [indice]		
	mov r10b, 14
	mul r10b
	mov r10b, al
	add r10b, r9b
	mov al, r10b
	lea r11, [tablero]
	cmp [r11+rax], byte 48
	je set
  
aux:
	mov al, [indice]
	dec al
	mov [indice], al
	cmp al, 0
	jge for
	cmp al, 0
	jl columnaLlena
  
set:
	lea r11, [tablero]
	mov [r11+rax], r8b
	mov [tempPosix], r10
	call resetIndice
	call imp
	;call impresion 			Actualizar tablero...
	mov al, [casillasLlenas]
	inc al
	mov [casillasLlenas], al
	jmp comprobarGanador
  
columnaLlena:
	call ejemplo
	call resetIndice
	call impresion
	call turn
	ret
	jmp continue
  
continueSet:
	call resetMatch
	mov al, [casillasLlenas]
	ret ;salirse con el stack
	cmp al, 42
	;--el problema es en turn...
	;jl turn
							;Imprimir tablero lleno...
	je nuevoJuego
  
resetMatch:
	mov r8b, 0
	mov [match], r8b
	ret
  
comprobarGanador:
	xor rax, rax
	mov al, [tempPosix]
  
izquierdaAsc:
	mov r8, izquierdaAsc
	mov r9, izquierdaDesc
	sub rax, 15
	lea r11, [tablero]
	push rcx
	mov rcx, [r11+rax]
	mov rax, rcx
	pop rcx
	mov [valor], byte al
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
	;mov r11, [tablero+rax]--------------------
	lea r11, [tablero]
	add r11, rax
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
	;mov r11, [tablero+rax]---------------
	lea r11, [tablero]
	add r11, rax
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
	;mov r11, [tablero+rax]----------------
	lea r11, [tablero]
	add r11, rax
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
	;mov r11, [tablero+rax]------------------
	lea r11, [tablero]
	add r11, rax
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
	;mov r11, [tablero+rax]---------------------
	lea r11, [tablero]
	add r11, rax
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
	;mov r11, [tablero+rax]--------------
	lea r11, [tablero]
	add r11, rax
	mov [valor], r11b
	cmp byte [valor], 10
	je auxJump
	cmp rax, 82
	jle comparador
	jmp auxJump

comparador:
	lea r11, [tablero]
	add r11, rax
	push rax
	xor rax, rax
	mov al, [tempPosix]
	push r10
	lea r10, [tablero]
	add r10, rax
	cmp r11b, r10b
	pop r10
	pop rax
	je setMatch
	jne auxJump
	
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
	;print msgGana,lenGana Mensaje de ganador...
	;print jugador, 1 el jugador que gano..
	;printNl Salto de linea...
	ret
  
nuevoJuego:
	xor rax, rax
	;print msgNuevo, lenNuevo Mensaje sobre reiniciar el juego...
	;printNl Mas salto de linea...
	;input TheChoosenJuan, 2 Input de si sí reinicia el juego o si no...
	
	mov al, [TheChoosenJuan]
	cmp al, 1
	je reinicio
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
	jmp inicio
	
nuevoTablero:
	;mov [tablero+rax], byte "0"-------------
	lea r11, [tablero]
	add r11, rax
	mov r11b, byte "0"
	sub rax, 2
	jmp nuevoTableroAux

;Imprime el tablero completo, por eso 84=14*6
impresion:
	;mostrar el tablero
	ret
 
resetIndice:
	mov al, 5
	mov [indice], al
	ret
  
fin:
	call ExitProcess
	