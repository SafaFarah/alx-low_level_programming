#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function
 * @array: array
 * @size: size
 * @action: pointer of fuction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == 0 || action == NULL)
		return;
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
