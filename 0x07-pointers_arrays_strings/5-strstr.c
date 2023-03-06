# include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int k;
	int s;
	int n;
	int flag = 0;

	for (n = 0; haystack[n] > '\0'; n++)
	{
		if (needle[0] == haystack[n])
		{
			s = n;
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		for (k = 0; needle[k] > '\0'; k++)
		{
			if (needle[k] != haystack[s])
			{
				flag = 0;
				break;
			}
			else
				s++;
		}
	}
	if (flag == 1)
		return (&haystack[n]);
	else
		return (0);
}
