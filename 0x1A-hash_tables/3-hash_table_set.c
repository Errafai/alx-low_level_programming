#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned int index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	if(ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		 temp = ht->array[index];
		 ht->array[index] = new_node;
		 new_node->next = temp;
	}
	return (1);

}
