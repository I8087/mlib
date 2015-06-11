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
void clear_screen(void);
void move_cursor(unsigned short cursor);
short get_cursor_pos(void);
void print_horiz_line(bool double_line);
void show_cursor(void);
void hide_cursor(void);
void draw_block(unsigned short color, unsigned char start_x, unsigned char start_y, unsigned char end_x, unsigned char end_y);
char* file_selector(void);
char list_dialog(char* list, char* string1, char* string2);
void draw_background(char* top, char* bottom, unsigned short color);
void print_newline(void);
void dump_registers(void);
bool dialog_box(char* string1, char* string2, char* string3, bool mode);
void print_space(void);
void dump_string(char* string);
void print_digit(unsigned short digit);
void print_1hex(unsigned char digit);
void print_2hex(unsigned char digit);
void print_4hex(unsigned short digit);
char* input_string(char* buffer);

#endif
