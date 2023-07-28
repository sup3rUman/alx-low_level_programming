section .data
    hello_msg db 'Hello, Holberton,',0
    format db '%s', 10, 0   ; '%s' format specifier followed by a newline character (10) and a null terminator (0)

section .text
    extern printf       ; Import the printf function from the C library

global main
main:
    push rbp
    mov rdi, format     ; Set the first argument (format) for printf
    mov rsi, hello_msg  ; Set the second argument (hello_msg) for printf
    call printf         ; Call the printf function
    pop rbp
    ret                 ; Return from the main function

