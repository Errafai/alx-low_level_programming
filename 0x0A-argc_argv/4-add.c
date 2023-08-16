#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*main - adds positive numbers
*@argc: the number of argumants
*@argv: the argumants
*Return: 0 always
*/
int main(int argc, char *argv[])
{
	int i, s = 0;

	if (argc < 2)
		s = 0;
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			s += atoi(argv[i]);
		}
	}
	printf("%d\n", s);
	return (0);
}
