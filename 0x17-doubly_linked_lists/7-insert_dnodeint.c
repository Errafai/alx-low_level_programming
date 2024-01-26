#include "lists.h"
/**
 * insert_dnodeint_at_index - add a node at the idx
 * @idx: the index of the place of the new node
 * @h: the head of the list
 * @n: the number (data)
 * Return: the new node and NULL if it faild
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *nth;
	unsigned int j;

	j = listint_len(*h) - 1;
	if (idx > j)
		return (NULL);
	if (idx == 0 || h == NULL)
		new = add_dnodeint(h, n);
	else if (idx == j)
		new = add_dnodeint_end(h, n);
	else
	{
		nth = get_dnodeint_at_index(*h, idx);
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		nth->prev->next = new;
		new->prev = nth->prev;
		new->next = nth;
		nth->prev = new;
	}
	return (new);
}

/**
 * listint_len - #include "lists.h"
 * @h: the head of the DDl
 * Return: the number of nodes in DDL
 */
size_t listint_len(dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
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

	j = listint_len(head) - 1;
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
