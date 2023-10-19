section .data
    message db "Hello, Holberton",0
    formating db "%s\n",0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, formating
    mov rsi, message
    call printf
    pop rbp
    ret	; return value
