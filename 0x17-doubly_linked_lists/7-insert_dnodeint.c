#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer to head of list
 * @n: new node element
 * @idx: index of the list where the new node should be added.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	dlistint_t *temp2;
	dlistint_t *temp3;
	unsigned int len = 0;
	unsigned int i = 0;

	temp = *h;
	temp2 = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	while (i < len)
	{
		if (i == idx)
		{
			temp3 = temp2->prev;
			temp3->next = new;
			new->prev = temp3;
			new->next = temp2;
			temp2->prev = new;
			return (new);
		}
		temp2 = temp2->next;
		i++;
	}
	return (NULL);
}
