#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - prints the minimum number of coins to make change
*@argc: the number of argumants
*@argv: the argumants
*Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int n = atoi(argv[1]), i = 0, k = 0;
	const int array[5] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < 5)
	{
		if (n >= array[i])
		{
			k += n / array[i];
			n = n % array[i];
		}
		i++;
	}
	printf("%d\n", k);
	return (0);
}
