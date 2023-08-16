#include <stdlib.h>
#include "main.h"
/**
*_calloc - allocates memory for an array, using malloc
*@nmemb: the number of elements
*@size: the size of one elements
*Return: return a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n = nmemb * size, i;
	char *s = malloc(n);

	if (n == 0 || size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		s[i] = 0;
	}
	return (s);
}
