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

	if (h != NULL)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
