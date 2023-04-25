#include "main.h"

/**
 * _print_binary - Function that prints binary.
 * @args: The specifier type.
 *
 * Return: The binary.
 */

int _print_binary(va_list args, flags_t *f)
{
	int x;
	unsigned int y;
	char *z;
	int count = 0;

	y = va_arg(args, unsigned int);
	z = convert(y, 2);

	if (!y)
		count = count + _putchar('0');
	for (x = 0; z[x] && y; x++)
		count = y +  _putchar(z[x]);
	return (count);
}
