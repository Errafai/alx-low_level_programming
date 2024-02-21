#include "main.h"
/**
 * _strncat - contatinate n char from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of char to copy
 * Return: the final word
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
