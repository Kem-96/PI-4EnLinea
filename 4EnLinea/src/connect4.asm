bits 64
default rel

global inicio, reinicio

section .data
	extern tablero
	extern jugador
	extern columna
	extern casillasLlenas
	extern flagColumnaLlena
	extern ganador
	indice: db 5
	match: db 0
	
section .bss
        valor: resb 2
        tempPosix: resb 2
	posicion: resb 2
	
section .txt

inicio:
	mov r8b, [jugador]
	mov [jugador], r8b
	call turn
	jmp continue
	
turn:
	mov r8b, [jugador]
	cmp r8b, 49
	je two
	jne one
  
one:
	mov [jugador], byte 49
	ret
	
two:
	mov [jugador], byte 50
	ret

continue:
	mov r8b, [jugador]
	xor r9, r9
	xor rax, rax
	mov r9b, [columna]	
	mov al, 2
	mul r9
	mov r9b, al
  
for:
	mov al, [indice]		
	mov r10b, 14
	mul r10b
	mov r10b, al
	add r10b, r9b
	mov al, r10b
	lea r11, [tablero]
	mov r11, [r11+rax]
	cmp r11b, byte 48
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
	mov al, [casillasLlenas]
	inc al
	mov [casillasLlenas], al
	jmp comprobarGanador
  
columnaLlena:
	mov [flagColumnaLlena], byte 1
	call resetIndice
	call turn
	ret
  
continueSet:
	call resetMatch
	mov al, [casillasLlenas]
	ret
  
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
	mov r11, [r11+rax]
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
	lea r11, [tablero]
	mov r11, [r11+rax]
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
	lea r11, [tablero]
	mov r11, [r11+rax]
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
	lea r11, [tablero]
	mov r11, [r11+rax]
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
	lea r11, [tablero]
	mov r11, [r11+rax]
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
	lea r11, [tablero]
	mov r11, [r11+rax]
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
	lea r11, [tablero]
	mov r11, [r11+rax]
	mov [valor], r11b
	cmp byte [valor], 10
	je auxJump
	cmp rax, 82
	jle comparador
	jmp auxJump

comparador:
	lea r11, [tablero]
	mov cl, [r11+rax]
	push rax
	xor rax, rax
	mov al, [tempPosix]
	mov r11b, [r11+rax]
	pop rax
	cmp cl, r11b
	je setMatch
	jne auxJump
	
auxJump:
	xor rax, rax
	mov al, [tempPosix]
	jmp r9
  
setMatch:
	add [match], byte 1
	
comprobarFichas:
	cmp byte [match], 3
	je setGanador
	jmp r8
  
setGanador:
	mov [ganador], byte 1
	ret
	
reinicio:
	mov [jugador], byte 50
	call resetIndice
	mov [casillasLlenas], byte 0
	call resetMatch
	mov [ganador], byte 0
	mov rax, 82
  
nuevoTableroAux:
	cmp rax, 0
	jge nuevoTablero
	jmp fin
	
nuevoTablero:
	lea r11, [tablero]
	mov [r11+rax], byte 48
	sub rax, 2
	jmp nuevoTableroAux
 
resetIndice:
	mov al, 5
	mov [indice], al
	ret
  
fin:
        ret
	
