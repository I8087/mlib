global _long_int_negate

_long_int_negate:
    push bp
    mov bp, sp

    mov ax, [bp+4]

    call os_long_int_negate

    pop bp
    ret
