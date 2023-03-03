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
	int k;
	int length = 0;
	int j = 0;
	int w = 0;
	int total = 0;
	int n = 0;
	int total2 = 0;
	int s = 0;

	while (*(s1 + i) != '\0')
	{
		i++;
		count++;
	}
	while (*s2 + j) != '\0')
	{
		j++;
		length++;
	}
	for ( k = 0; k < count; k++)
	{
		w = s1[k];
		total =total + w;
	}
	for (n = 0; n < length ; n++)
	{
		s = s2[n];
		total2 = total2 + s;
	}
	return (total - total2);
}
