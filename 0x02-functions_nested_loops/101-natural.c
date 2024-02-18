#include "main.h"
/**
 * main - print the sum of the multiples of 3 and 5
 * Return: always 0
 */
int main(void)
{
	int i, s = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			s += i;
	}
	printf("%d\n", s);
	return (0);
}
