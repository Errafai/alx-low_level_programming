#include "main.h"
/**
 * get_bit - returns the value of a bit at a given idx
 *@n: the number
 *@index: the index of the bit
 *Return: the bit bit in the given index or -1 when fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
