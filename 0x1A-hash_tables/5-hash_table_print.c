#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hash table to print.
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned char flag = 0;
	hash_node_t *cell;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			cell = ht->array[i];

			while (cell != NULL)
			{
				printf("'%s':'%s'", cell->key, cell->value);
				cell = cell->next;
				if (cell != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
