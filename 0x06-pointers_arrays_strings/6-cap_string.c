#include "main.h"
int is_there(char ch)
{
	char s[] = " \n\t,;.!?\"(){}";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ch)
			return (1);
	}
	return (0);
}
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
