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

/* A global variable for I/O error reporting. */
#ifndef ioerr
extern bool ioerr;
#endif

/* Define the disk functions. */
char* get_file_list(char* buffer);
int load_file(char* string, unsigned int location);
void write_file(char* filename, char* buffer, unsigned int bytestowrite);
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
void serial_port_enable(bool mode);
void send_via_serial(char data);
char get_via_serial();

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
char* input_string(char* buffer, int limit);

/* Define the string functions. */
int string_length(char* string);
int find_char_in_string(char* string, char chartofind);
void string_reverse(char* string);
void string_charchange(char* string, char chartofind, char chartoreplacewith);
char* string_uppercase(char* string);
char* string_lowercase(char* string);
char* string_copy(char* oldstring, char* newstring);
char* string_truncate(char* string, int size);
char* string_join(char* string1, char* string2, char* outstring);
void string_chomp(char* string);
void string_strip(char* string, char chartoremove);
bool string_compare(char* string1, char* string2);
bool string_strincmp(char* string1, char* string2, char chartocheck);
void string_parse(); /* RETURNS MULTIPLE STRINGS! FIND A WORK AROUND!!! */
int string_to_int(char* string);
char* int_to_string(int number);
char* sint_to_string(int number);
char* long_int_to_string(); /* TAKES A LONG! */
void set_time_fmt(bool format);
void get_time_string(char *string);
void set_date_fmt(int format);
void get_date_string(char* string);

/* Define the sound functions. */
void speaker_tone(unsigned int frequency);
void speaker_off(void);

/* Define the BASIC interpreter function. */
void run_basic(char* code, unsigned int size, char* parameter_string);

#endif
