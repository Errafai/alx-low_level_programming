#include "main.h"
/**
 * clear_bit - clear a bit in a given position
 * @n: the number
 * @index: the index of the bit
 *Return: 1 if succes or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(n) * 8)
		return (-1);
	i = *n;
	if (((i >> index) & 1) == 0)
	{
		*n = i;
		return (1);
	}
	i = 1UL << index;
	*n ^= i;
	return (1);
}
