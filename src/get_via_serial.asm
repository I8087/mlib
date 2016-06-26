global _get_via_serial

_get_via_serial:
    push bp
    mov bp, sp

    call os_get_via_serial

    pop bp
    ret
