#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: number
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		/*for loop*/
		for (i = 0; i < n; i++)
		{
			/*for loop*/
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
