global _string_parse

_string_parse:
    push bp
    mov bp, sp
    sub sp, 2

    mov si, [bp+4]

    call os_string_parse

    push bx

    mov bx, [bp-2]
    mov [bx], ax

    pop ax

    add bx, 2
    mov [bx], ax

    add bx, 2
    mov [bx], cx

    add bx, 2
    mov [bx], dx

    mov ax, [bp-2]

    mov sp, bp
    pop bp
    ret
