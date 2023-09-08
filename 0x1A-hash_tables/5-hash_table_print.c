#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	printf("{");
	if (ht != NULL)
	{
		for (i = 0; i < (ht->size) - 1 ; i++)
		{
			if (ht->array[i])
				printf("'%s': '%s' ,", ht->array[i]->key, ht->array[i]->value);
		}
		if (ht->array[i])
		printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
