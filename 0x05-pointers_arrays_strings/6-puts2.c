#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: the string
*/
void puts2(char *str)
{
	int i = 0;
	int n = strlen(str);

	while (i < n)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
