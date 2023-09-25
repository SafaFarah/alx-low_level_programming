#include "lists.h"

/**
 * free_listint2 - frees a listint_t list , sets the head to NULL.
 * @head: pointer to pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	current = *head;
	if (current == NULL)
		return;
	if (current != NULL)
	{
		while (current != NULL)
		{
			current = current->next;
			(*head)->next = NULL;
			free(*head);
			*head = current;
		}
		free(current);
	}
}
