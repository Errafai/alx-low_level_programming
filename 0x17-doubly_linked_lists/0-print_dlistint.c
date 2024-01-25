#include "lists.h"
/**
*print_dlistint - print nodes of DDL
*@h: the head of the DDL
*Return: the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i = 0;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return i;
}
