#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *@head: the head of list
 *@idx: the index of the elements
 *@n: the number to be change
 *Return: the number
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *pre;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new || *head == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	pre  = *head;
	for (i = 1; i < idx - 1; i++)
	{
		if (pre == NULL)
		{
			free(new);
			return (NULL);
		}
		pre = pre->next;
	}

	new->next = pre->next;
	pre->next = new;

	return (new);

}
