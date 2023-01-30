#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//header file for each projects on printf

int _printf(const char *format, ...);

int _position(const char *s, int n);

int _strlen(char *s);

char *_strcat(char *dest, char *src, int n);

int _abs(int n);

int _numlen(int n);

void *rev_string(char *s);

/**
 * struct flag_s - A new type defining a flags struct
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t

/**
 * struct print_handler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 */
typedef struct print_handler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} print_handler

//print_nums
int print_int(va_list l, flags_t *f);

void print_number(int n);

int print_unsigned(va_list l, flags_t *f);

int count_digit(int i);

// print_bases
int print_hex(va_list l, flags_t *f);

int print_hex_big(va_list l, flags_t *f);

int print_binary(va_list l, flags_t *f);

int print_octal(va_list l, flags_t *f);

// converter
char *convert(unsigned long int num, int base, int lowercase);

// _printf
int _printf(const char *format, ...);

// get_print
int (*get_print(char s))(va_list, flags_t *);

// get_flag
int get_flag(char s, flags_t *f);

// print_alpha
int print_string(va_list l, flags_t *f);

int print_char(va_list l, flags_t *f);

// write_funcs
int _putchar(char c);

int _puts(char *str);

// print_custom
int print_rot13(va_list l, flags_t *f);

int print_rev(va_list l, flags_t *f);

int print_bigS(va_list l, flags_t *f);

// print_address
int print_address(va_list l, flags_t *f);

// print_percent
int print_percent(va_list l, flags_t *f);

#endif
