#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: string
 *@src: string
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int count = 0;
	int j = 0;
	int length = 0;
	int k;
	int l = 0;


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
	for (k = count; k < (count + length); k++)
	{
		dest[k] = src[l];
		l++;
	}
	dest[k] = '\0';
	return (dest);
}
