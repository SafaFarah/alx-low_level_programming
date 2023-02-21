#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: number
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar(43);
		i = 1;
	}
	if (n == 0)
	{
		_putchar(48);
		i = 0;
	}
	if (n < 0)
	{
		_putchar(45);
		i = -1;
	}
	return (i);
}
