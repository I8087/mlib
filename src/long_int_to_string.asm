global _long_int_to_string

_long_int_to_string:
    push bp
    mov bp, sp

    mov ax, [bp+4]

    call os_long_int_to_string

    pop bp
    ret
