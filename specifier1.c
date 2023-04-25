#include "main.h"

/**
 * _print_int: Function that prints integer.
 * @args: The specifier type.
 *
 * Return: Number printed.
 */

int _print_int(va_list args)
{
	int x;
	int y = 0;
	int z = va_arg(ap, int);

	if (z < 0)
	{
		y = y + _putchar('-');
	}
	for (x = 1000000000; x > 0; x /= 10)
	{
		if (z / i)
		{
			if ((z / x) % 10 < 0)
				y = y + _putchar(-(z / x % 10) + '0');
			else
				y = y + _putchar((z / x % 10) + '0');
		}
		else if (z / x == 0 && x == 1)
		{
			y = y + _putchar(z / x % 10 + '0');
		}
	}
	return (y);
}
