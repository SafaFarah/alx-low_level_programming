#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup -  a function that returns a pointer to a newly allocated space
 * @str: string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	char *s;
	char *s1;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		i++;
		len++;
	}
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	s1 = s;
	while (*str)
	{
		*s1 = *str;
		s1++;
		str++;
	}
	*s1 = '\0';
	return (s);
}

