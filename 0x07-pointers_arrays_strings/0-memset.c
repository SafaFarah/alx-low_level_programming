# include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: string
 * @b: string
 * @n: number
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int length = 0;

	while (*(s + i) != '\0')
	{
		i++;
		length++;
	}
	if (n <= length)
	{
		for (k = 0 ; k < n ; k++)
		{
			s[k] = b;
		}
	}
	return (s);
}

