#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a list and set the head to NULLi
 * @head: the first elements of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}

