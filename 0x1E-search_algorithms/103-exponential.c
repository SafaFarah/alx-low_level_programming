#include "search_algos.h"
/**
 * exponential_search - searches for a value using exponential_search.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index of value ,or -1 if not found or array = NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, start;
	int index;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		start = i;
		i = i * 2;
	}
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", start, i);
	size = i - start + 1;
	index = binary_search(&array[start], size, value);
	if (index != -1)
		index = index + start;
	return (index);
}

/**
 * binary_search - function searches for value in (int) by the Binary search.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index of value is located ,or -1 if not found or array = NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (high + low) / 2;
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[high]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
