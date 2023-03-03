#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: string
 * @s2: string
 *
 * Return : number
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int count = 0;
	int length = 0;
	int j = 0;
	int w;
	int n;

	while (*(s1 + i) != '\0')
	{
		i++;
		count++;
	}
	while ((*s2 + j) != '\0')
	{
		j++;
		length++;
	}
	s1[0] = n;
	s2[0] = w;
	return (n - w);
}
