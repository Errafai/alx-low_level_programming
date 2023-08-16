#include "main.h"
/**
* _memset -  fills memory with a constant byte.
*@s: the location of the input
*@b: the input
*@n: the size of the inputs
*Return: return the value of s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
