#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list.
 * @head: pointer to head of list.
 * @index:the index of the node.
 *
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *temp2;
	unsigned int n;
	unsigned int i;

	temp = head;
	temp2 = head;
	i = 0;
	n = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	while (i < n)
	{
		if (i == index)
			return (temp2);
		temp2 = temp2->next;
		i++;
	}
	return (NULL);
}
