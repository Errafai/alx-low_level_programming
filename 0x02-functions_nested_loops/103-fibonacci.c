#include "main.h"
/**
 * main - sum of all even number in fibonachi until 4M
 * Return: always 0
 */
int main(void)
{
	long int fibn_1 = 1, fibn_2 = 0, fibn = 0, i = 0;

	while (fibn < 4000000)
	{
		fibn = fibn_1 + fibn_2;
		if (fibn % 2 == 0)
			i += fibn;
		fibn_2 = fibn_1;
		fibn_1 = fibn;
	}
	printf("%ld\n", i);
	return (0);
}
