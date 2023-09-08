#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return: the value associated with the element, or NULL if no found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}
