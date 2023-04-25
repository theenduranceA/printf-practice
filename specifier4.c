#include "main.h"

/**
 * _print_string - loops through a string and prints
 * every character
 * @args: The specifier type.
 * @f: Pointer to the struct.
 * Return: number of char printed
 */
int _print_string(va_list args, flags_t *f)
{
	char *s = va_arg(args, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}
