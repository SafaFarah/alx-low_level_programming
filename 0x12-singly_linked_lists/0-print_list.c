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
	list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		printf("[%u] %s", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}

