#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - delets a node at an index of a
 *@head: the head of the list
 *@index: the index of the node
 *Return: 1 0r -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *old, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	prev = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (prev == NULL)
			return (-1);
		 prev = prev->next;
	}

	old = prev->next;
	temp = old->next;
	prev->next = temp;
	free(old);
	return (1);
}
