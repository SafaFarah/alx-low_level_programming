# include "main.h"

/**
 * print_number -  a function that prints an integer.
 * @n: number
 */
void print_number(int n)
{
	int i = 100000;
	int m;

	if (n == 0)
		_putchar(0 + '0');
	else
	{
		if (n < 0)
		{
			_putchar(45);
			n = n * -1;
		}
		while (n / i == 0)
		{
			i = i / 10;
		}
		while (i != 0)
		{
			m = n / i;
			_putchar(m + '0');
			n = n % i;
			i = i / 10;
		}
	}
}
