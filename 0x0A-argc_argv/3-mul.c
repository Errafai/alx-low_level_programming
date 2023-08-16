#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - multiplies two numbers
* @argc: the number of argumants
* @argv: the argumants
* Return: 0 always
*/
int main(int argc, char *argv[])
{
	int a, b, m;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	m = a * b;
	printf("%d\n", m);
	return (0);
}
