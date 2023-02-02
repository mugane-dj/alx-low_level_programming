#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - inserts an element to the hash table.
 *
 * @ht: the hash table to insert element.
 * @key: key associated with the element.
 * @value: data associated with the element.
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashIndex;
	char *value_copy;
	hash_node_t *element;

	if (ht == NULL || strlen(key) == 0 || strlen(value) == 0)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	hashIndex = key_index((const unsigned char *)key, ht->size);

	while (ht->array[hashIndex])
	{
		++hashIndex;

		hashIndex %= ht->size;
	}

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);

	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}
	element->value = value_copy;
	element->next = ht->array[hashIndex];
	ht->array[hashIndex] = element;

	return (1);
}
