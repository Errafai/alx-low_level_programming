#include "main.h"
/**
*_isupper - function that checks for uppercase character
*@c: the character
*Return: Returns 1 if c is uppercase Returns 0 otherwise
*/
int _isupper(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
