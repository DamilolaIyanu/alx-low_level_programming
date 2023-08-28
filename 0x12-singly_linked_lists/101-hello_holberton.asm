section .data
    hello db "Hello, Holberton", 0
    newline db 10  ; ASCII code for newline

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello
    call printf

    ; Print a newline
    mov rdi, newline
    call printf

    pop rbp
    ret
