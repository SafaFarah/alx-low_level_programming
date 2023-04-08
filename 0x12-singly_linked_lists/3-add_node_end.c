#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node_end -  a function that adds a new node at the end of a list
 * @head: pointer
 * @str: string
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = temp;
	return (*temp);
}
