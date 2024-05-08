#include "search_algos.h"
#include <math.h>
/**
 * jump_search -function searches for value in (int)sorted array by Jump search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index of value is located ,or -1 if not found or array = NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int start = 0;
	int end = 0;
	int i;

	if (array == NULL || size == 0)
		return (-1);
	while (end < (int)size)
	{
		if (array[end] < value)
		{
			start = end;
			end += jump;
			printf("Value checked array[%d] = [%d]\n", start, array[start]);
		}
		else
			break;
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	for (i = start; i <= end; i++)
	{
		if (i >= (int)size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
