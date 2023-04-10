#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to int
 * @b: pointer
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int base = 1;
	int n;
	int len;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (n = len; n > 0; n--)
	{
		if ((b[n] != '0') || (b[n] != '1'))
			return (0);
		if (b[n] == '1')
			num += atoi(b) * base;
		base *= 2;
	}
	return (num);
}
