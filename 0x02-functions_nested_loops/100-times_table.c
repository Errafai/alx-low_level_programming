#include "main.h"
/**
 * print_times_table - print the product table of a number
 * @n: the number
 */
void print_times_table(int n)
{
	int i = 0, j;

	if (n >= 15 || n < 0)
		return;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			_atoi(j * i);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				if ((j + 1) * i <= 99)
					_putchar(' ');
				if ((j + 1) * i <= 9)
					_putchar(' ');
			}
			else
				_putchar('\n');
			j++;
		}
		i++;
	}
}
/**
 * _atoi - print a number using putchar
 * @n: the number
 */
void _atoi(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n <= 9 && n >= 0)
		_putchar(n + '0');
	else
	{
		_atoi(n / 10);
		_putchar(n % 10 + '0');
	}
}
