global _remove_file

_remove_file:
    push bp
    mov bp, sp

    mov ax, word [bp+4]

    call os_remove_file

    pop bp
    ret
