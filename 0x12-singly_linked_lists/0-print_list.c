#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (1);
	if (h->str == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		printf("[%u] %s", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}

