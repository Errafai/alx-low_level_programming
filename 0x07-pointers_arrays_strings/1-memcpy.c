#include "main.h"
/**
*_memcpy - Write a function that copies memory area
*@dest: the destination
*@src: the input
*@n: the number of bytes
*Return: the new destination dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
