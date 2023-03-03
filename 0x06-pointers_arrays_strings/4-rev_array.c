#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
	int w;
	int i = n - 1;
	int k;

	for (k = 0; k < n; k++)
	{
		if (k == i)
			break;
		w = a[k];
		a[k] = a[i];
		a[i] = w;
		i--;
	}
}
