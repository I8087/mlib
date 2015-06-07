global _load_file

_load_file:
    push bp
    mov bp, sp

    mov ax, word [bp+4]
    mov cx, word [bp+6]

    call os_load_file

    mov ax, bx

    pop bp
    ret
