#include "main.h"
void print_times_table(int n)
{
	int i = 0, j;

	if (n >= 15 || n <= 0)
		return;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			_atoi(j * i);
			if (j != n)
			{
				putchar(',');
				putchar(' ');
				if ((j + 1) * i <= 99)
					putchar(' ');
				if ((j + 1) * i <= 9)
					putchar(' ');
			}
			else
				putchar('\n');
			j++;
		}
		putchar('\n');
		i++;
	}
}
void _atoi(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n <= 9 && n >= 0)
		putchar(n + '0');
	else
	{
		_atoi(n / 10);
		putchar(n % 10 + '0');
	}
}
