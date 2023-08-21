#include "main.h"

/**
 *_abs - a function that computes the absolute value of an integer.
 *@n: number
 *Return: an integer
 */
int _abs(int n)
{
	int i;

	if (n  >= 0)
		i = n;
	if (n  < 0)
		i = -1 * n;
	return (i);
}
