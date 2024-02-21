#include "main.h"

int _strlen(char *dest)
{
	int i = 0;

	while (dest[i])
		i++;
	return (i);
}

char *_strcat(char *dest, char *src)
{
	int i;
	int n = _strlen(dest);

	for (i = n;!src[i]; i++)
		dest[i] = src[i - n];
	dest[i] = '\0';
	return (dest);
}
