#include "main.h"

/**
 * _printf - My custom printf that replicates what printf does
 * @format: List of types
 *
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_int},
		{"i", _print_int},
		{"r", _print_reverse},
		{"R", _print_rot13},
		{"b", _print_binary},
		{"u", _print_unsigned},
		{"o", _print_octal},
		{"x", _print_hex_l},
		{"X", _print_hex_u},
		{NULL, NULL}
	};

	va_start(args, format);
	count = my_print(format, argument, args);
	va_end(args);
	return (count);
}
