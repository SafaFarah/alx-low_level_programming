#include "lists.h"

/**
 * add_nodeint_end  - adds a new node at the end  of a listint_t list
 * @head: pointer to a pointer of the head  of the list
 * @n: integer of a new  node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new->n = n;
	current->next = new;
	new->next = NULL;
	return (new);
}
