# include "main.h"

/**
 * *_memcpy -  a function that copies memory area.
 * @dest: string
 * @src: string
 * @n: number
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n ; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
