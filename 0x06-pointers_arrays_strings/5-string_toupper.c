# include "main.h"

/**
 * *string_toupper -  changes all lowercase letters of a string to uppercase.
 * @a: string
 *
 * Return: char
 */
char *string_toupper(char *a)
{
	int i = 0;
	int length = 0;
	int j;

	while (*(a + i) != '\0')
	{
		i++;
		length++;
	}
	for (j = 0 ; j < length; j++)
	{
		if (a[j] >= 'a' && a[j] <= 'z')
			a[j] = a[j] - 32;
	}
	return (a);
}
