#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the head of the list
 * @index: the index of wanted nodes
 * Return: the this nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
