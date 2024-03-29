#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: pointer to head of list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	unsigned int len;

	ptr = h;
	len = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
