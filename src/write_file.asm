_write_file:
    push bp
    mov bp, sp
    sub sp, 2

    mov [bp-2], bx

    mov ax, word [bp+4]
    mov bx, word [bp+6]
    mov cx, word [bp+8]

    call os_write_file

    jc .failed

    xor ax, ax
    jmp .skip

.failed:
    mov ax, 1

.skip:
    mov bx, word [bp-2]

    mov sp, bp
    pop bp
    ret
