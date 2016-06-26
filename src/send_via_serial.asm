global _send_via_serial

_send_via_serial:
    push bp
    mov bp, sp

    mov al, byte [bp+4]

    call os_send_via_serial

    pop bp
    ret
