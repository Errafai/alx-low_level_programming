#include "main.h"
/**
*puts_half - prints half of a string, followed by a new line
*@str: the string
*/
void puts_half(char *str)
{
	int n = strlen(str);
	int i = (n - 1) / 2 + 1;

	while (i < n)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
