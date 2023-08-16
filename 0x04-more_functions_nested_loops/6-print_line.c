#include "main.h"
/**
*print_line - unction that draws a straight line in the terminal
*@n: lengh of line
*/
void print_line(int n)
{
	int i;
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{	
			_putchar('_');
		}
		putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
