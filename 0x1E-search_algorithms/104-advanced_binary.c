#include "search_algos.h"
/**
 * binary_search - function searches for value in (int) by the Binary search.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index of value is located ,or -1 if not found or array = NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	int binarySearch(int arr[], int l, int r, int x)
{
	if (hight >= low) 
	{
		mid = high + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
		{
			return (advanced_binary(array, mid, value));
		}
		return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not present in array
    return -1;
}
