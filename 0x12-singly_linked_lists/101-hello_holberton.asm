section .data
    hello db 'Hello, Holberton',0x0a,0

section .text
    global _start

_start:
    ; call printf with hello string
    mov rdi, hello
    mov rax, 0
    call printf

    ; exit program with return value 0
    mov eax, 0
    mov ebx, 0
    int 0x80
