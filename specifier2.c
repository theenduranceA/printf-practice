#include "main.h"

/**
 * _print_binary - Function that prints binary.
 * @args: Tge specifier type.
 *
 * Return: The binary.
 */

int _print_binary(va_list args)
{
	int x;
	unsigned int y;
	char *z;
	int count = 0;

	y = va_arg(argd, unsigned int);
	z = convert(y, 2);

	if (!y)
		count += _putchar('0');
	for (x = 0; z[x] && y; x++)
		count = y +  _putchar(z[x]);
	return (count);
}
