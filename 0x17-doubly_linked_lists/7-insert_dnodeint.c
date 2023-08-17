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
	dlistint_t *new, *temp, *temp2, *temp3, *temp4;
	unsigned int len, i = 0;

	temp = *h;
	temp2 = *h;
	temp3 = *h;
	temp4 = *h;
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
	if (idx > len)
		return (NULL);
	if (idx == 0 && temp2 == NULL)
		return (new);
	if (idx == 0)
	{
		new->next = temp2;
		temp2->prev = new;
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
	if (idx == len)
	{
		while (temp4->next != NULL)
			temp4 = temp4->next;
		temp4->next = new;
		new->prev = temp4;
	}
	free(new);
	return (NULL);
}
