#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: strig
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;
	int k;
	int j = 0;
	int length = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		count++;
	}
	while (*(src + j) != '\0')
	{
		j++;
		length++;
	}
	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
		if (k > length)
			break;
	}
	return (dest);
}
