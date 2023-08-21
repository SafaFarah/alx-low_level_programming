# include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: int 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;
	int j = 0;
	int count1 = 0;
	int length = 0;
	int n;
	int k;
	int flag;

	while (*(s + i) != '\0')
	{
		i++;
		count++;
	}
	while (*(accept + j) != '\0')
	{
		j++;
		count1++;
	}
	for (n = 0 ; n < count; n++)
	{
		flag = 0;
		for (k = 0; k < count1; k++)
		{
			if (s[n] == accept[k])
			{
				length++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			break;
	}
	return (length);
}
