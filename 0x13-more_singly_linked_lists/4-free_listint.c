#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list from
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
