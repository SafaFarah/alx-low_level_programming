#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *@n: nunmber
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
		i = -i;
	return (i);
}
