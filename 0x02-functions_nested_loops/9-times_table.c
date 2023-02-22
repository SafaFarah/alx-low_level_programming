# include "main.h"

/**
 * times_table - a function that prints the 9 times table,
 *
 */
void times_table(void)
{
	int k, l, j;

	/*for loop*/
	for (k = 0 ; k <= 9 ; k++)
	{
		/*for loop*/
		for (l = 0 ; l <= 9 ; l++)
		{
			j = k * l;
			if (j > 9)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			if (j <= 9)
			{
				_putchar(32);
				_putchar(j + '0');
			}
			if (l == 9)
				break;
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');
	}
}
