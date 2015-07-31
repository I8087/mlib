extern _main
global __start

__start:
    push bp
    mov bp, sp

    ; Setup argc and argv.
    cmp byte [si], 0x00
    je .null

    ; Move the only argv into **argv.
    mov [.buffer], si

    ; Setup the initial parameters.
    push word .buffer
    push word 1
    jmp .skip

.null:
    ; If SI is null, then pass null values.
    push word 0
    push word 0
.skip:

    ; Call the main function and clean up after it.
    call _main
    add sp, 4

    ; NOTE: An os_exit function was submitted to MikeOS.
    ; Hopefully it will be implemented in version 4.6

    pop bp
    ret

; **argv
.buffer: dw 0
