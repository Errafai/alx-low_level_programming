#include <stdlib.h>
#include "lists.h"
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
*add_node - adds a new node at the beginning of a list
*@head: the head of the list
*@str: the string of the node
*Return: the pointer of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

