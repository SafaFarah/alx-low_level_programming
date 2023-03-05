#include "main.h"

/**
 * print_triangle -  a function that prints a triangle
 *@size: triangle  size
 */
void print_triangle(int size)
{
	int k;
	int l;

	if (size > 0)
	{
		/*for loop*/
		for (k = 0; k < size; k++)
		{
			/*for loop*/
			for (l = 1; l < size; l++)
			{
				_putchar(32);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
