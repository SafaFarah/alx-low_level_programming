#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head of linked list.
 * @index: the index of the node, starting at 0.
 *
 * Return: the nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		if (n == index)
			return (current);
		current = current->next;
		n++;
	}
	return (NULL);
}
