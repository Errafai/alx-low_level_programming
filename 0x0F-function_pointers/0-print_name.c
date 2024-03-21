#include "function_pointers.h"
/**
 * print_name - print the name string in the function
 * @name: the name string
 * @f: the function to print the name sting
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
