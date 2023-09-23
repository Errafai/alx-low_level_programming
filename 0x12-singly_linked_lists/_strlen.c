#include "lists.h"

/**
*_strlen - calcule le long d'un string
*@str: the string
*Return: the length of the string
*/

int _strlen(const char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}	
