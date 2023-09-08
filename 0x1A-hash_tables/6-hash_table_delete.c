#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int j;
	hash_node_t *item;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item != NULL)
		{
			free(item->key);
			free(item->value);
			free(item);
		}
	}
	for (j = 0; j < ht->size; ++j)
	{
		item = ht->array[j];
		temp = item;
		while (item)
		{
			temp = item;
			item = item->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
