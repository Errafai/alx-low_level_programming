#include "main.h"
/**
 * main - print the first 50 fibonachi number
 * Return: always 0
 */
int main(void)
{
	long long int fibn_1 = 1, fibn_2 = 0, fibn = 0, i = 0;

	while (i < 98)
	{
		fibn = fibn_1 + fibn_2;
		printf("%lld", fibn);
		if (i != 97)
			printf(", ");
		else
			printf("\n");
		i++;
		fibn_2 = fibn_1;
		fibn_1 = fibn;
	}
	return (0);
}
