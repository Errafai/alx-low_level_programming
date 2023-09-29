#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index of the bit
 * Return: return 1 in succes of -1 in fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	i = *n;
	*n = (((i >> index) | 1) << index);
	return (1);
}
