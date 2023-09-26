#include "lists.h"

/**
 * free_listint2 - frees a listint_t list , sets the head to NULL.
 * @head: pointer to pointer to list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if ((&*head) == NULL)
		return;
	current = *head;
	if (current == NULL)
		return;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
