#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: string
 * @s2: string
 *
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int count = 0;
	int j = 0;
	int length = 0;
	int n;
	int w;

	while (*(s1 + i) != '\0')
	{
		count++;
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		length++;
		j++;
	}
	for (n = 0; n <= count; n++)
	{
		if (s1[n] != s2[n])
			break;
	}
	w = s1[n] - s2[n];
	return (w);
}
