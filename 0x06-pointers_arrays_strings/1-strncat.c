#include "main.h"

/**
 * *_strncat -  a function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;
	int k;
	int l = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		count++;
	}
	for (k = count; k < (count + n); k++)
	{
		dest[k] = src[l];
		l++;
	}
	dest[k] = '\0';
	return (dest);
}
