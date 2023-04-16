#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - a function that converts a binary number to int
 * @b: pointer
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int n;

	if (b == NULL)
		return (0);
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		num = 2 * num + (b[n] - '0');
	}

	return (num);
}
