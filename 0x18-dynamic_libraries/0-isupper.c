#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: character
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}

