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

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(unsigned int) * size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
