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
	listint_t *current;
	listint_t *new;
	listint_t *prev;
	int flag = 0;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	current = *head;
	new->n = n;
	while (current != NULL)
	{
		if (count == idx)
		{
			flag = 1;
			break;
		}
		prev = current;
		current = current->next;
		count++;
	}
	if (flag == 1)
	{
		prev->next = new;
		new->next = current;
		return (new);
	}
	return (NULL);
}
