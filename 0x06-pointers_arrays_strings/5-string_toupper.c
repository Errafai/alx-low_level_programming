#include "main.h"
/**
 * string_toupper - turn any letter in a string into capital letter
 * @s: the string
 * Return: a pointer to the new string
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (s);
}
