#include "main.h"
/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: the binary number
 * REturn: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	for (i = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i <<= 1;
		i += *b -'0';
	}
	return (i);
}
