#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - a function that adds a new node at the beginning of a list_t
 * @head: pointer
 * @str: string
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (head->next);
}
