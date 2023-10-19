section .data
    hello db 'Hello, Holberton',0   ; Null-terminated string
    format db '%s', 10, 0           ; Format string for printf: "%s\n"

section .text
    global main
    extern printf

main:
    push rbp          ; Preserve the base pointer
    mov rdi, format   ; Format specifier
    mov rsi, hello    ; String to print
    call printf      ; Call printf

    pop rbp           ; Restore the base pointer
    ret              ; Return from the main function
