#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a: the array of int
 * @n: the number of element in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}


