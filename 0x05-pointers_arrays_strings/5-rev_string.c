#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s: string array
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;
	int j;
	int k;
	char c;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	j = count - 1;
	k = 0;
	while (j > k)
	{
		c = s[k];
		s[k] = s[j];
		s[j] = c;
		j--;
		k++;
	}
}

