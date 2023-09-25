#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to a pointer of the head of the list
 * Return: the head node's data (n) or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (temp == NULL)
		return (0);
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
