global _serial_port_enable

_serial_port_enable:
    push bp
    mov bp, sp

    mov ax, [bp+4]

    call os_serial_port_enable

    pop bp
    ret
