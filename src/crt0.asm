extern _main
global __start

__start:
    push bp
    mov bp, sp

    ; Setup argc and argv.
    cmp byte [si], 0x00
    je .null

    push si
    push word 1
    jmp .skip

.null:
    push word 0
    push word 0
.skip:

    call _main

    pop bp
    ret
