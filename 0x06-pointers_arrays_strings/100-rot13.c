#include "main.h"
/**
 * rot13 - crypte a string using the rot13 methode
 * @rot: the string
 * Return: a pointer to rot
 */
char *rot13(char *rot)
{
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; rot[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (rot[i] == a[j])
			{
				rot[i] =  b[j];
				break;
			}
		}
	}
	return (rot);
}
