#include "lists.h"
/**
 * listint_len - returns th number of elements in a linked list
 * @h: the head of the list
 * Return: the number of element of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
