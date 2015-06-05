_print_string:
    push bp
    mov bp, sp

    mov ax, word [bp+4]

    call os_print_string
    
    pop bp
    ret
