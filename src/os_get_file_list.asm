_os_get_file_list:
    push bp
    mov bp, sp
    
    mov ax, word [bp+4]
    
    pop bp
