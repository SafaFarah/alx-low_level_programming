#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list.
 * @head: pointer to pointer to head of list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2, *temp3;
	unsigned int len = 0;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	temp2 = *head;
	temp3 = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (index >= len)
		return (-1);
	if (index == 0)
	{
		if (len != 1)
			temp2->next->prev = NULL;
		*head = temp2->next;
		return (delete_node(temp2));
	}
	while (i < len)
	{
		if (i == index)
		{
			temp3 = temp2->prev;
			temp3->next = temp2->next;
			if (index != len - 1)
				temp2->next->prev = temp3->next;
			return (delete_node(temp2));
		}
		temp2 = temp2->next;
		i++;
	}
	return (-1);
}


/**
 * delete_node - deletes the node.
 * @h: pointer to node of list.
 *
 * Return: 1 if it succeeded..
 */
int delete_node(dlistint_t *h)
{
	free(h);
	h = NULL;
	return (1);
}
