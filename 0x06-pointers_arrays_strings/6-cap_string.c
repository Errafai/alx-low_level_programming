#include "main.h"
/**
 * is_there - checks if there is a spetial char in the string
 * @ch: the char form the sting to check
 * Return: 0 is there is not and 1 if there is
 */
int is_there(char ch)
{
	char s[] = " \n	,;.!?\"(){}";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ch)
			return (1);
	}
	return (0);
}
/**
 * cap_string - turn any letter that is after a special char into upper
 * @s: the string
 * Return: the new sting
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_there(s[i]) == 1 && s[i + 1] <= 'z' && s[i + 1] >= 'a')
			s[i + 1] -= 32;
	}
	return (s);
}
