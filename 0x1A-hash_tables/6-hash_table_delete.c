#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: hash table to delete.
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cell, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		cell = ht->array[i];
		while (cell != NULL)
		{
			tmp = cell->next;
			free(cell->key);
			free(cell->value);
			free(cell);
			cell = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
