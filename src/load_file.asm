_load_file:
    push bp
    mov bp, sp
    sub sp, 2

    mov word [ep-2], cx

    mov ax, word [bp+4]
    mov cx, word [bp+6]

    call os_load_file

    mov [ep-2], word cx

    mov ax, bx

    mov sp, bp
    pop bp
    ret
