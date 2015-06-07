global _create_file

_create_file:
    push bp
    mov bp, sp

    mov ax, word [bp+4]

    call os_create_file

    pop bp
    ret
