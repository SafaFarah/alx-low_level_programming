#include "main.h"

/**
 * print_triangle -  a function that prints a triangle
 *@size: triangle  size
 */
void print_triangle(int size)
{
	int k;
	int l;
	int i;

	if (size > 0)
	{
		/*for loop*/
		for (k = 1; k <= size; k++)
		{
			/*for loop*/
			for (l = 1; l <= (size - k); l++)
			{
				_putchar(32);
			}
			for (i = 1; i <= k; ++i)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
