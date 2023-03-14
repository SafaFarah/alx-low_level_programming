#include <stdio.h>
#include <stdlib.h>
# include "main.h"

/**
 * *create_array -  a function that creates an array of chars
 * @size : size
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	i = 0;
	if (size == 0)
		return (NULL);
	while (1)
	{
		s = malloc(sizeof(unsigned int) * size);
		if (s == NULL)
			return (NULL);
		s[0] = c;
		i++;
	}
	return (s[0]);
}
