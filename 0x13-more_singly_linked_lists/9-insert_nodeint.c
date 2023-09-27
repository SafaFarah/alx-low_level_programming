#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @n: inserted number.
 * @head: pointer to pointer to head of list.
 * @idx: the index of the list
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new, *prev;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	current = *head;
	new->n = n;
	new->next = NULL;
	if ((&*head) == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current != NULL)
	{
		if (count == idx)
		{
			prev->next = new;
			new->next = current;
			return (new);
		}
		prev = current;
		current = current->next;
		count++;
	}
	if (idx == count)
	{
		prev->next = new;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
