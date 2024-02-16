#include "hash_tables.h"
/**
 * key_index - return the index of the key
 * @size: the size of the table
 * @key: the key of the element
 * Return: the index of the key to put it in
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
