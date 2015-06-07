bits 16

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

; Include the screen functions.
%include "print_string.asm"
