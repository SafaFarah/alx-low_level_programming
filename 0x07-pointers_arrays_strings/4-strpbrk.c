# include "main.h"

/**
 * *_strpbrk -  a function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int k;
	int n;
	int flag = 0;

	for (k = 0; s[k] >= '\0'; k++)
	{
		for (n = 0; accept[n] >= '\0'; n++)
		{
			if (s[k] == accept[n])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		return (&s[k]);
	else
		return (0);
}
