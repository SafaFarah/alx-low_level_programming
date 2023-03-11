# include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: int number
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

