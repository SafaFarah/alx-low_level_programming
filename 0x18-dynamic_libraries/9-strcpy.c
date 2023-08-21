#include "main.h"

/**
 * *_strcpy - Write a function that copies the string pointed
 * @dest: string pointer
 * @src: steing pointer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int count = 0;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
		count++;
	}
	for (j = 0 ; j <= count; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
