#include "main.h"
/**
 * _strcat - concatnate two strings dest+src
 * @dest: the destination code
 * @src:the source code
 * Return: the pointer to the new string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int n;

	for (n = 0; dest[n] != '\0'; n++)
	{
	}
	for (i = n, j = 0; src[j] != '\0'; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
