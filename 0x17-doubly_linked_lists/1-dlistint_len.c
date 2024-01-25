#include "lists.h"
/**
 * dlistint_len - #include "lists.h"
 * @h: the head of the DDl
 * Return: the number of nodes in DDL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while(h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
