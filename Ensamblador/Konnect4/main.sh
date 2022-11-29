clear
nasm -f elf64 main.s
ld -m elf_x86_64 main.o -o compiled
./compiled
