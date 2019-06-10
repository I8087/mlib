global _long_int_negate

_long_int_negate:
    push bp
    mov bp, sp
    sub sp, 2

    mov bx, [bp+4]
    mov dx, [bx]

    add bx, 2
    mov ax, [bx]

    call os_long_int_negate

    mov bx, [bp-2]
    mov [bx], dx

    add bx, 2
    mov [bx], ax

    mov ax, [bp-2]

    mov sp, bp
    pop bp
    ret
