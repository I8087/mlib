#ifndef MLIB_H
#define MLIB_H

/* Define some helpful keywords. */
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

/* Define the disk functions. */
char* get_file_list(char* buffer);
bool load_file(char* string, unsigned int location);
bool write_file(char* filename, char* buffer, unsigned int bytestowrite);
bool file_exists(char* filename);
void create_file(char* filename);
void remove_file(char* filename);
void rename_file(char* old_filename, char* new_oldname);
int get_file_size(char* filename);

/* Define the keyboard functions. */
int wait_for_key(void);
int check_for_key(void);

/* Define the math functions. */
int bcd_to_int(char number);
int long_int_negate(int number); /* WRONG! */
int get_random(int low, int high);

/* Define the misc functions. */
char get_api_version(void);
void pause(unsigned int decisecond);
void fatal_error(char* message);

/* Define the port functions. */
void port_byte_out(int port, char data);
char port_byte_in(int port);
char serial_port_enable(bool mode);
char send_via_serial(char data);
int get_via_serial(); /* The lower byte is the byte recieved and the upper byte is errorcode. */

/* Define the screen functions. */
void print_string(char* string);
void clear_screen(void);
void move_cursor(unsigned int cursor);
int get_cursor_pos(void);
void print_horiz_line(bool double_line);
void show_cursor(void);
void hide_cursor(void);
void draw_block(unsigned char color, unsigned char start_x, unsigned char start_y, unsigned char end_x, unsigned char end_y);
char* file_selector(void);
char list_dialog(char* list, char* string1, char* string2);
void draw_background(char* top, char* bottom, unsigned int color);
void print_newline(void);
void dump_registers(void);
bool dialog_box(char* string1, char* string2, char* string3, bool mode);
void print_space(void);
void dump_string(char* string);
void print_digit(unsigned int digit);
void print_1hex(unsigned char digit);
void print_2hex(unsigned char digit);
void print_4hex(unsigned int digit);
char* input_string(char* buffer);

/* Define the sound functions. */
void speaker_tone(unsigned int frequency);
void speaker_off(void);

/* Define the BASIC interpreter function. */
void run_basic(char* code, unsigned int size, char* parameter_string);

#endif
