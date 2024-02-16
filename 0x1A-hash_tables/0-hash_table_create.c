#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = (hash_table_t*) malloc(sizeof(hash_table_t));
	size_t i;
	if (new == NULL)
		return NULL;
	new->size = size;
	new->array = (hash_node_t**) malloc(sizeof(hash_node_t) * new->size);
	if (new->array == NULL)
		return NULL;
	for (i = 0; i < new->size; i++)
		new->array[i] = NULL;
	return new;
}
