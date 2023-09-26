#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: the head of the list
 * Return: the number of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n",h->n);
		h = h->next;
		i++;
	}
	return (i);
}
