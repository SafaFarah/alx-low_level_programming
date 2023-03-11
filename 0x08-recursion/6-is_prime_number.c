# include "main.h"

/**
 * _prime_num -  a function that returns 1 if the num prime
 * @n: number
 * @i: number
 *
 * Return: number 0 or 1
 */
int _prime_num(int n, int i)
{
	if (i < n)
	{
	if (n % i == 0)
		return (0);
	else
		return (_prime_num(n, i + 1));
	}
	else
		return (1);
}
/**
 * is_prime_number -  a prime number,
 * @n: number
 *
 * Return: int number
 */
int is_prime_number(int n)
{
	return  (_prime_num(n, 2));
}
