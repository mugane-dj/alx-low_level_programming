#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: hash table to search for element.
 * @key: key member associated with value retrieved.
 * Return: value member of element retrieved, NULL on failure.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	hash_node_t *cell;
	unsigned long int hashIndex;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);

	hashIndex = key_index((const unsigned char *)key, ht->size);

	if (hashIndex >= ht->size)
		return (NULL);

	cell = ht->array[hashIndex];

	while (cell && cell->key == key)
		cell = cell->next;

	if (cell == NULL)
		value = NULL;
	else
		value = cell->value;

	return (value);
}
