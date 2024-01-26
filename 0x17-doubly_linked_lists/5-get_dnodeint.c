#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node from the list
 * @head: the head of the list
 * @index: the index of the nth node
 * Return: the nth node and NULL if the node dont exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, j;
	dlistint_t *curr;

	j = dlistint_len(head) - 1;
	if (index > j || !head)
		return (NULL);
	curr = head;
	while (i != index)
	{
		curr = curr->next;
		i++;
	}
	return (curr);
}
/**
 * dlistint_len - #include "lists.h"
 * @h: the head of the DDl
 * Return: the number of nodes in DDL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
