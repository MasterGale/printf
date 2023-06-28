#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
<<<<<<< HEAD
​
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
​
=======

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
<<<<<<< HEAD
​
/* SIZES */
#define S_LONG 2
#define S_SHORT 1
​
=======

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};
<<<<<<< HEAD
​
​
=======


>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;
<<<<<<< HEAD
​
int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);
​
/****************** FUNCTIONS ******************/
​
=======

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);
<<<<<<< HEAD
​
=======

>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
/* Functions to print numbers */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);
<<<<<<< HEAD
​
int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);
​
/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);
​
/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);
​
=======

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
<<<<<<< HEAD
​
/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);
​
/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
​
=======

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);
<<<<<<< HEAD
​
int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);
​
=======

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
<<<<<<< HEAD
​
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
​
=======

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

>>>>>>> 805010a052b28f3d6e4355ae41883828fff7f8b1
#endif /* MAIN_H */
