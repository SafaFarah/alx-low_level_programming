#include "main.h"
#include <stdio.h>

/**
 * print_times_table - a function that prints the n times table
 * @n: number
 */
void print_times_table(int n)
{
	int a;
	int b;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
					printf("%d", (a * b));
				if ((a * b) <= 9 && b != 0)
					printf(",   %d", (a * b)0);
				if ((a * b) > 9 && (a * b) < 100)
					printf(",  %d", (a * b));
				if ((a * b) < 99)
					printf(", %d", (a * b));
			}
			printf("\n");
		}
	}
}
