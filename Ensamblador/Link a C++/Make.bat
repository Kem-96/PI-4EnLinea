nasm -f win64 connect4.asm -o connect4.obj
g++ main.cpp connect4.obj -o tablero.exe -no-pie