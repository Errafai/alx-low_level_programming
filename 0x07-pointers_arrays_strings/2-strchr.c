#include "main.h"
#include <stddef.h>
/**
*_strchr - function that locates a character in a string.
*@s: the string
*@c: the charactar
*Return: return the location of the c
*/
char *_strchr(char *s, char c)
{
	int i;
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i <= n; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
