#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to a linked list.
 *
 * Return: the sum of all the data (n) of a linked list.
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
