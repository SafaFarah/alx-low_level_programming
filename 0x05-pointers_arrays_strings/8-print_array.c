#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: int pointer
 * @n: number
 */
void print_array(int *a, int n)
{
	int i;

	/* for loop */
	for (i = 0; i < (n - 1) ; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d/n", a[i]);
}
