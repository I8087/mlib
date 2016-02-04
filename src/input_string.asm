global _input_string

_input_string:
    push bp
    mov bp, sp

    mov ax, word [bp+4]

    call os_input_string

    pop bp
    ret