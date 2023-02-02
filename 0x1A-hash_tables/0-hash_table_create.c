#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table.
 *
 * @size: size of the array
 * Return: A pointer to the newly created hash table on success.
 *		NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
		return (NULL);

	/*create empty cells within the array to match the size*/
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}
