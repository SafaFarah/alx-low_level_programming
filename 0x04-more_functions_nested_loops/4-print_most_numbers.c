#include "main.h"

/**
 * print_most_numbers -  a function that prints the numbers
 *
 */
void print_most_numbers(void)
{
	int l;

	/*for loop*/
	for (l = 48; l <= 57; l++)
	{
		if (l == 50 || l == 52)
			continue;
		_putchar(l);
	}
	_putchar('\n');
}
