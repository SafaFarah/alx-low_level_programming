# include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @s : string
 *
 * Return: string
 */
char *rot13(char *s)
{
	int i = 0;
	int x = 0;
	char array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (x = 0; x < 51; x++)
		{
			if (s[i] == array[x])
			{
				s[i] = rot[x];
				break;
			}
		}
		i++;
	}
	return (s);
}
