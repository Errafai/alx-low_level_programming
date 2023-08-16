#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*create_array - creates an array of chars
*@size: the size of the array
*@c: the intialized char
*Return: a pointer of NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
