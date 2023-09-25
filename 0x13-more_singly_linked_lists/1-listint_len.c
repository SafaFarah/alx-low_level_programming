#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head of list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	unsigned int len = 0;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	return (len);
}
