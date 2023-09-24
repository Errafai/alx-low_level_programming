#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *_strlen - calcule le long d'un string
 * *@str: the string
 * *Return: the length of the string
 * */

int _strlen(const char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: the head of th list
 * @str: the string
 * Return: the tail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t* new;
	list_t* tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = new;
	}
	return (new);
}
