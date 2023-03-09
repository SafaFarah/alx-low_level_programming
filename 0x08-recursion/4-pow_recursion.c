# include "main.h"

/**
 * _pow_recursion -  a function that returns the value of x pow y
 * @x: number
 * @y: number
 *
 * Return: int number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

