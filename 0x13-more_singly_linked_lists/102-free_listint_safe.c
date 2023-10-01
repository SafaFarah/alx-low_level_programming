#include "lists.h"

/**
 * free_listint_safe - a function frees a list
 * @h: pointer to pointer to head of linked list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int sub;
	listint_t *temp;

	if ((*h) == NULL || h == NULL)
		return (0);
	while ((*h) != NULL)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
