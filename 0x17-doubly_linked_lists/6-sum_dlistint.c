#include "lists.h"
/**
 * sum_dlistint - sum all the data in the list (int)
 * @head: the head of the list
 * Return: the sum of all element and 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int s = 0;

	if (head == NULL)
		return (0);
	curr = head;
	while (curr)
	{
		s += curr->n;
		curr = curr->next;
	}
	return (s);
}
