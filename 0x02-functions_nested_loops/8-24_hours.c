# include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int k, l, j, i;

	for (k = 0; k <= 2; k++)
	{
	for (l = 0; l <= 9; l++)
	{
	if ((k <= 2 && l <= 3) || (k <= 1 && l <= 9))
	{
	for (j = 0; j <= 5; j++)
	{
	for (i = 0; i <= 9; i++)
	{
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar(58);
		_putchar(j + '0');
		_putchar(i + '0');
		_putchar('\n');
	}
	}
	}
	}
	}
}
