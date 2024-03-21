#include "function_pointers.h"

/**
 * int_index - return the index of the first cmp != 0
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: the function to compare
 * Return: the index of array else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
		int i;

		if (size <= 0)
				return -1;
		for (i = 0; i < size; i++)
		{
				if (cmp(array[i]))
						return (i);
		}
		return (-1);
}
