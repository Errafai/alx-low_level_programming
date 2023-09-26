#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: the head of the list
 * @n: the integer data
 * Return: the new node at the last
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (new);
}
