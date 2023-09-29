#include "main.h"
/**
 * flip_bits - return the number of flips to get another number
 *@n: the first nubmer
 *@m: the other number
 *Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o, i = 0;

	o = n ^ m;
	while (o)
	{
		i += o & 1;
		o >>= 1;
	}
	return (i);
}
