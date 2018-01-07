global _string_parse

_string_parse:
    push bp
    mov bp, sp

    mov ax, [bp+4]

    call os_string_parse

    pop bp
    ret
