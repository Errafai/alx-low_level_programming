#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len -   returns the number of elements in a list
 * @h: the head of the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
