global _rename_file

_rename_file:
    push bp
    mov bp, sp
    sub sp, 2
    
    mov [bp-2], bx

    mov ax, word [bp+4]
    mov bx, word [bp+6]

    call os_rename_file

    mov bx, word [bp-2]

    mov sp, bp
    pop bp
    ret
