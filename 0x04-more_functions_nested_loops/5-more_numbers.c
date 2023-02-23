#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 *
 */
void more_numbers(void)
{
	int k;
	int i;

	/*for loop*/
	for (k = 0; k < 10; k++)
	{
		/*for loop*/
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(1 + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
