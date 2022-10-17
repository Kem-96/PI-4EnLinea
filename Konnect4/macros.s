section .data
  Nl: db "", 0, 0xa
  lenNl: equ $-Nl

section .text
%macro print 2
  push rax
  mov rax, 1
  mov rdi, 1
  mov rsi, %1
  mov rdx, %2
  syscall
  pop rax
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

;Solo imprime un salto de linea.
%macro printNl 0
  mov rax, 1
  mov rdi, 1
  mov rsi, Nl
  mov rdx, lenNl
  syscall
%endmacro
ret