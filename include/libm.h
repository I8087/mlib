#ifndef NULL
#define NULL (void*) 0
#endif

#ifndef _LIBM
#define _LIBM

// Define the os functions.
char* os_get_file_list(char* buffer);
char os_load_file(char* string, unsigned short location);
char os_write_file(char* filename, char* buffer, unsigned short bytestowrite);
char os_file_exists(char* filename);
void os_create_file(char* filename);
void os_remove_file(char* filename);
void os_rename_file(char* old_filename, char* new_oldname);
short os_get_file_size(char* filename);

// Define the keyboard functions.

#endif _LIBM
