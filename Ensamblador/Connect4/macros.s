section .data
nl: db "", 0xa
l: equ $-nl

section .bss
digit_space resb 100 ;store string digit
digit_space_pos resb 8 ;keeps track of how far along of the string we are

section .text

;--------MACROS-----------------------------------------------------------------------------------------

%macro print 2
  mov rax, 1
  mov rdi, 1
  mov rsi, %1
  mov rdx, %2
  syscall
%endmacro

%macro input 2
  mov rax, 0
  mov rdi, 1
  mov rsi, %1
  mov rdx, %2
  syscall
%endmacro

;Resta 48 al valor dado, esto para pasar los numeros de un valor iniciando en 0 y no en 48.
%macro realVal 1
  xor rax, rax
  mov rax, [%1]
  sub rax, 48
  mov [%1], rax
%endmacro

%macro character 2
  mov %1, [%2]
  add %1, 48
%endmacro

%macro exit 0
  mov rax, 60
  mov rdi, 0
  syscall
%endmacro

%macro printNl 0
  mov rax, 1
  mov rdi, 1
  mov rsi, nl
  mov rdx, l
  syscall
%endmacro

%macro printINT 1
mov rax, %1
call printInt
%endmacro

%macro ind 2
mov %1, [%2]
sub %1, 48
mov [%2], %1
mov %1, %2
mov al, [%1]
%endmacro
;--------------------------------------------------------------------------------------------------------


;----SUBRUTINES------------------------------------------------------------------------------------------
printInt:
mov rcx, digit_space
mov rbx, 10
mov [rcx], rbx
inc rcx
mov [digit_space_pos], rcx

print_int_loop:
mov rdx, 0
mov rbx, 10
div rbx
push rax
add rdx, 48

mov rcx, [digit_space_pos]
mov [rcx], dl 
inc rcx
mov [digit_space_pos], rcx

pop rax
cmp rax, 0
jne print_int_loop

print_int_loop2:
mov rcx, [digit_space_pos]
mov rax, 1
mov rdi, 1
mov rsi, rcx
mov rdx, 1
syscall

mov rcx, [digit_space_pos]
dec rcx 
mov [digit_space_pos], rcx

cmp rcx, digit_space
jge print_int_loop2
ret
;----------------------------------------------------------------------------------------------------