#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of a dlistint_t
 * @head: the head of the list
 * @n: the data
 * Return: the address of the neew element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		(*head)->prev = new;
		new->next = *head;
	}
	new->prev = NULL;
	*head = new;
	return (new);
}
