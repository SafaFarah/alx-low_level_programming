# include "main.h"

/**
 * *leet - a function that encodes a string into 1337.
 * @s : string
 *
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;
	int x = 0;
	char array[] = { 'a', 'e', 'o', 't', 'l' };
	char l[] = { 4, 3, 0, 7, 1 };

	while (s[i] != '\0')
	{
		for (x = 0; x < 5; x++)
		{
			if (s[i] == array[x] || s[i] == array[x] - 32)
			{
				s[i] = l[x] + '0';
				break;
			}
		}
		i++;
	}
	return (s);
}
