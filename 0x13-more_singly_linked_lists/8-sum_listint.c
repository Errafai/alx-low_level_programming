#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum all elements of the lists
 * @head: the head of the list
 * Return: the sum of all elements
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (!head)
		return (0);
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
