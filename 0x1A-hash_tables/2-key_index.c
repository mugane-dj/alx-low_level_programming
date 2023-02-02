#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - gets the index of a key.
 *
 * @key: given key.
 * @size: size of the array of the hash table.
 * Return: The index at which the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashIndex, hash;

	hash = hash_djb2(key);

	hashIndex = hash % size;

	return (hashIndex);
}
