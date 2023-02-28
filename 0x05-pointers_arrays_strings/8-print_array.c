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

	if (n > 0)
	{
	/* for loop */
	for (i = 0; i < (n - 1) ; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
	}
	printf("\n");
}
