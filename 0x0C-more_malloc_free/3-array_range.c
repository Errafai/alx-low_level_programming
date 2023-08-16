#include <stdlib.h>
#include "main.h"
/**
*array_range - creates an array of integers
*@min: the smallest number
*@max: the bigest numbet
*Return: array of intergers from min to max
*/
int *array_range(int min, int max)
{
	int n = max - min;
	int i;
	int *array = malloc((n + 1) * sizeof(int));

	if (min > max)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= n; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
