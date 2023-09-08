#include "hash_tables.h"

/**
 * hash_table_set -  a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item == NULL)
	{
		item = create_item(key, value);
		if (item == NULL)
			return (0);
		item->next = NULL;
		ht->array[index] = item;
		return (1);
	}
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			if (strcmp(item->value, value) == 0)
				return (1);
			item->value = value_update(item->value);
			strcpy(item->value, value);
			return (1);
		}
		item = item->next;
	}
	if (item == NULL)
	{
		item = create_item(key, value);
		if (item == NULL)
			return (0);
		item->next = ht->array[index];
		ht->array[index] = item;
		return (1);
	}
	return (0);
}


/**
 * create_item - a function creats item for adding to hash table.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: pointer to created item.
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (NULL);
	item->value = malloc(strlen(value) + 1);
	if (item->value == NULL)
		return (NULL);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}


/**
 * value_update - a function frees  and reallocates value.
 * @value: value needs reallocated
 *
 * Return: value afer reallocated.
 */
char *value_update(char *value)
{
	free(value);
	value = malloc(strlen(value) + 1);
	if (value == NULL)
		return (NULL);
	return (value);
}
