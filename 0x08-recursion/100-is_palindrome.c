#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: int number
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0 || s == NULL)
		return (1);
	return (check_palindrome(s, 0, n - 1));
}

/**
 * check_palindrome - function checks if string is palindrome
 * @str: the string to check
 * @start: the starting index
 * @end: the ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *str, int start, int end)
{
	if (start == end)
		return (1);
	if (str[start] != str[end])
		return (0);
	if (start < end + 1)
		return (check_palindrome(str, start + 1, end - 1));
	return (1);
}
