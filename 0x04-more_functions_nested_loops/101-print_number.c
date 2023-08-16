#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	for (i = 10000; i >= 1; i = i / 10)
	{
		if (n >= i)
		{
			_putchar(((n / i) % 10) + '0');
		}
	}
}
