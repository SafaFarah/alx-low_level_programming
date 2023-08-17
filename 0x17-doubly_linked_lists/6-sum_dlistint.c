#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of list.
 * @head: pointer to head of list.
 *
 * Return: the sum of all the data (n) of list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *temp2;
	int n = 0;
	int sum = 0;
	int i = 0;

	temp = head;
	temp2 = head;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	while (i < n)
	{
		sum = sum + temp2->n;
		temp2 = temp2->next;
		i++;
	}
	return (sum);
}
