#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer shall point to a newly allocated space in memory,
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, len, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	len = len1 + n + 1;
	concat = malloc(len * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		concat[len1 + i] = s2[i];
	}
	concat[len1 + n] = '\0';
	return (concat);
}
