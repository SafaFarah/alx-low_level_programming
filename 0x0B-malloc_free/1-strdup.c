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
	int i = 0;
	int len = 0;

	while (*(str + i) != '\0')
	{
		i++;
		len++;
	}
	s = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
