#include "lists.h"

/**
 * print_dlistint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	unsigned int count;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
