#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head of the list
 *		and return its data
 *@head: the head of the list
 *Return: the data of the list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int t;

	if (*head == NULL)
		return (0);

	temp = *head;
	t = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (t);
}

