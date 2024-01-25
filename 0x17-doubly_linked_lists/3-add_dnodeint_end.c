#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of the list
 * @head: the head of DDL
 * @n: the number(data)
 * Return: the new node address or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
