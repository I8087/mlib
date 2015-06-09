#ifndef MLIB_H
#define MLIB_H

// Define some helpful keywords.
#ifndef NULL
#define NULL ((void*) 0)
#endif

#ifndef bool
typedef int bool;
#endif

#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

// Define the disk functions.
char* get_file_list(char* buffer);
bool load_file(char* string, unsigned short location);
bool write_file(char* filename, char* buffer, unsigned short bytestowrite);
bool file_exists(char* filename);
void create_file(char* filename);
void remove_file(char* filename);
void rename_file(char* old_filename, char* new_oldname);
short get_file_size(char* filename);

// Define the keyboard functions.
short wait_for_key(void);
short check_for_key(void);

// Define the screen functions.
void print_string(char* string);

#endif
