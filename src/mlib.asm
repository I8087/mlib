bits 16

section .text

%include "..\include\mikedev.inc"

; Include the disk functions.
%include "get_file_list.asm"
%include "load_file.asm"
%include "write_file.asm"
%include "file_exists.asm"
%include "create_file.asm"
%include "remove_file.asm"
%include "rename_file.asm"
%include "get_file_size.asm"

; Include the keyboard functions.
%include "wait_for_key.asm"
%include "check_for_key.asm"

; Include the screen functions.
%include "print_string.asm"
