#include "main.h"

/**
 * *_strncat -  a function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;
	int k;
	int l = 0;
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
	for (k = count; k < (count + n); k++)
	{
		dest[k] = src[l];
		l++;
		if (k > (count + length))
			break;
	}
	return (dest);
}
