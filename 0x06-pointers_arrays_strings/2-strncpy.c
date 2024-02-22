#include "main.h"
/**
 * _strncpy - copy n char to dest from src
 * @dest: is the destination
 * @src: the source
 * @n: the n char
 * Return: the dest new value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
