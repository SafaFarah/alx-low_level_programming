#include "main.h"

/**
 * print_binary - function that prints the binary
 * @n: unsigned long intger
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = n;
	int count = 0;

	if (n == 0)
		_putchar(0);
	while (n > 0)
	{
		count++;
		n = n >> 1;
	}
	while (count > 0)
	{
		Count--;
		n = m;
		n = n >> count;
		if ((n & 1) == 0)
			_putchar(0);
		else
			_putchar(1);
	}
}
