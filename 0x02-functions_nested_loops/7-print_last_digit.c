#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *@k: nunmber
 *
 * Return: the value of the last digit
 */
int print_last_digit(int k)
{
	int i = k % 10;

	if (i < 0)
		i = i * -1;

	_putchar(i + '0');

	return (0);
}
