# include "main.h"

/**
 * _sqrt_root - a function that returns the natural square root of a number
 * @n: number
 * @i: root
 *
 * Return: sqrt root
 */
int _sqrt_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - a function returns the natural square root
 * @n : number
 *
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_root(n, 1));
}
