#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int n = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < (ht->size) ; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				if (n > 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				n++;
			}
		}
	}
	printf("}\n");
}
