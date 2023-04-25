#include "main.h"

/**
 * _print_char - Function that prints character.
 * @args: The specifier type.
 *
 * Return: 1
 */

int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * _print_string - Function that prints a string.
 * @args: The specifier type.
 *
 * Return: 1
 */

int _print_string(va_list args)
{
	int x = 0;
	char *str;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	for (x = 0; s[x]; x++)
		_putchar(str[x]);
	return (x);
}

/**
 * _print_percent - Function that prints a percent
 * @args: The specifier type.
 *
 * Return: 1
 */
int _print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
