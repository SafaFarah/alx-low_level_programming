#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - a function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: concatenates two strings
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int j = 0;
	int len2 = 0;
	int i1 = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		s3[i1] = *s1;
		s1++;
		i1++;
	}
	while (*s2 != '\0')
	{
		s3[i1] = *s2;
		s2++;
		i1++;
	}
	s3[i1] = '\0';
	return (s3);
}
