#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * @h: pointer
 *
 * Return:number of element in list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
