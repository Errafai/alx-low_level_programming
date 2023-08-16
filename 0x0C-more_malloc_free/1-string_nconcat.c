#include "main.h"
#include <stdlib.h>
/**
*_strlen - function that returns the length of a string
*@s: the string
*Return: the lenght of string
*/
int _strlen(char *s) 
{
        int i = 0;

        while (s[i] != 0)
        {
                i++;
        }
        return (i);
}
/**
*string_nconcat -  concatenates two strings
*@s1: the firts string
*@s2: the sconde string
*@n: the number of chars in the s2
*Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, l = 0;
	char *ss;

	if (_strlen(s2) <= n)
		n = _strlen(s2);
	ss = malloc(_strlen(s1) + n + 1);
	if (s1 == NULL)
		ss = "";
	if (s2 == NULL)
		s2 = "";
	if (ss = NULL)
		return (NULL);
	for (i = 0; i <= _strlen(s1); i++)
	{
		ss[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
            ss[_strlen(s1) + i] = s2[i];
        }
	ss[_strlen(s1) + n] = '\0';
	return (ss);
}		
