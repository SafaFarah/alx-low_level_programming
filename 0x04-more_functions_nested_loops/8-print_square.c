#include "main.h"

/**
 * print_square -  a function that prints a square
 *@size: squre size
 */
void print_square(int size)
{
	int k, l;

	if (size > 0)
	{
		/*for loop*/
		for (k = 0; k < size; k++)
		{
			/*for loop*/
			for (l = 0; l < size; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
