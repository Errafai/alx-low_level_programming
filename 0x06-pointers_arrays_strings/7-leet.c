#include "main.h"
/**
 * leet - encodes a string into 1337
 * @h: the string
 * Return: the new string
 */
char *leet(char *h)
{
	char a[][2] = {
		{'A', '4'},
		{'a', '4'},
		{'E', '3'},
		{'e', '3'},
		{'o', '0'},
		{'O', '0'},
		{'l', '1'},
		{'L', '1'},
		{'t', '7'},
		{'T', '7'},
		{'\0', '\0'}
	};
	int i, j;

	for (i = 0; h[i] != '\0'; i++)
	{
		for (j = 0; a[j][1] != '\0'; j++)
		{
			if (h[i] == a[j][0])
				h[i] = a[j][1];
		}
	}
	return (h);
}
