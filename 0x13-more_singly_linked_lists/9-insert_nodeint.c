#include <stdlib.h>
#include "lists.h"
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the head of the list
 * @index: the index of wanted nodes
 * Return: the this nth node
 */
listint_t *get_node(listint_t *head, unsigned int index)
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
	if (index > i)
		return NULL;
	return (head);
}
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
	new = malloc(listint_t);
	if (!new || get_node(*head, idx) == NULL)
		return (NULL)
	if (*head == NULL)
		return (NULL);

	pre = get_index(*head, idx-1);
	new->next = get_index(*head, idx);

	pre->next = new;
	new->n = n;

	return (new);
}
