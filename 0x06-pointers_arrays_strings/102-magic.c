#include "main.h"
#include <stdio.h>
/**
 * main - editting a[2] in one line to 98
 *        without using the variable a
 * Return: always 0
 */
int main(void)
{
	int n;
	int a[5] = {1, 3, 5, 7, 8};
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
