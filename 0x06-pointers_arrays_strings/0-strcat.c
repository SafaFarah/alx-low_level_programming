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
	int i;
	int count;
	int j;
	int length;
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
	for (k = count; k <= (count + length); k++)
	{
		desk[k] = src[l];
		l++;
	}
	return (dest);
}
