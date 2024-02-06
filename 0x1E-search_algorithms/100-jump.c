#include "search_algos.h"
#include<math.h>
/**
 * jump_search -function searches for value in (int)sorted array by Jump search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index of value is located ,or -1 if not found or array = NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0;
	size_t x = 0;
	size_t i;

	if (array == NULL)
		return (-1);
	while ((array[jump] < value) && (jump < size))
	{
		x = jump;
		jump += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", x, jump);
	for (i = x; i <= jump; i++)
	{
		if (i >= size)
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
