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
	hash_node_t *current_item;
	unsigned long int index;


	item = create_item(key, value);
	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			return (handle_collision(ht, index, item));
		}
		return (0);
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
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	item->next = NULL;
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}

/**
 * handle_collision - handle case of collision.
 * @ht : the hash table.
 * @index: the index of key.
 * @item: item for adding to hash table.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int handle_collision(hash_table_t *ht, unsigned long index, hash_node_t *item)
{
	hash_node_t *head;

	head = ht->array[index];
	if (head == NULL)
	{
		head = malloc(sizeof(hash_node_t));
		if (head == NULL)
			return (0);
		head->key = item->key;
		head->value = item->value;
		head->next = NULL;
		ht->array[index] = head;
		return (1);
	}
	else
	{

		ht->array[index] = node_insert(head, item);
		return (1);
	}
}

/**
 * node_insert - a function insters hash node into list.
 * @list: list of nodes in hash table.
 * @item: item for adding to hash table.
 *
 * Return: head of list node.
 */
hash_node_t *node_insert(hash_node_t *list, hash_node_t *item)
{
	hash_node_t *head;
	hash_node_t *node;

	if (list == NULL)
	{
		head = malloc(sizeof(hash_node_t));
		head->key = item->key;
		head->value = item->value;
		head->next = NULL;
		list = head;
		return (list);
	}
	else
	{
		node = malloc(sizeof(hash_node_t));
		node->key = item->key;
		node->value = item->value;
		node->next = list;
		list = node;
		return (list);
	}
}
