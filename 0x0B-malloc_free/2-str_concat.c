#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 *
 * Return: concatenates two strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int j = 0;
	int len2 = 0;
	int i1 = 0;
	int i2 = 0;
	char *s3;
	char *s4;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		i++;
		len1++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
		len2++;
	}
	s4 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s4 == NULL)
		return (NULL);
	s3 = s4;
	while (i1 < len1)
	{
		s3[i1] = s1[i1];
		i1++;
	}
	while (i1 < (len1 + len2))
	{
		s3[i1] = s2[i2];
			i2++;
	}
	s3[i1] = '\0';
	return (s4);
}
