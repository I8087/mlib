#ifndef LIBM_H
#define LIBM_H

#ifndef NULL
#define NULL ((void*) 0)
#endif

// Define the disk functions.
char* get_file_list(char* buffer);
char load_file(char* string, unsigned short location);
char write_file(char* filename, char* buffer, unsigned short bytestowrite);
char file_exists(char* filename);
void create_file(char* filename);
void remove_file(char* filename);
void rename_file(char* old_filename, char* new_oldname);
short get_file_size(char* filename);

// Define the keyboard functions.

// Define the screen functions.
void print_string(char* string);

#endif LIBM_H
