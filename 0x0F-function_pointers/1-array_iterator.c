#include "function_pointers.h"
/**
 * array_iterator - do (action) function to in integer
 * @size: the size of the array
 * @array: the array of integer
 * @action: the function applied to the integers
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

		size_t i;

		if (!array || !action)
			return;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
