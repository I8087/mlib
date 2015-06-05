_os_get_file_list:
    push bp
    mov bp, sp

    mov ax, word [bp+4]

    call os_get_file_list

    pop bp

    ret
