
extern printf
global main

main:
call printf 
mov edi, format
xor eax, eax

mov eax, o
ret
format: db 'hello holberton\n',O
