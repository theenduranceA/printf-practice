#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) VOID(x)
#define BUFF_SIZE 1024

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct printSpecifier - Function to print specifiers.
 * @zed: The operators to be printed.
 * @f: The function
 */

typedef struct printSpecifier
{
	char *zed;
	int (*f)(va_list args);
} print_type;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_percent(va_list args);
int _print_int(va_list args);
int _print_int(va_list args);
int _print_binary(va_list args);
int _print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_hex(va_list args);
int _print_HEX(va_list args);
int _print_STRING(va_list args);
int _print_pointer(va_list args);
int _print_reverse(va_list args);
int _print_rot13(va_list args);
char *convert(unsigned int num, int base);
int my_printf(const char *format, print_type argument[], va_list args);

#endif
