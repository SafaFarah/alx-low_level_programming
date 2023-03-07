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
	int k = 0;
	int n;
	int flag = 0;

	if (needle[0] == '\0')
		return (&haystack[0]);
	for (n = 0; haystack[n] > '\0'; n++)
	{
		if (needle[k] != '\0')
		{
			if (haystack[n] == needle[k])
			{
				flag = n - k;
				k++;
			}
			else
			{
				k = 0;
				flag = 0;
			}
		}
	}
	if (flag != 0)
		return (&haystack[flag]);
	else
		return (0);
}
