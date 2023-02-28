#include "main.h"

/**
 * print_rev - a function that prints a string,
 *@s: string pointer
 */
void print_rev(char *s)
{
	int count = 0;
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i++;
		count++;
	}
	j = count - 1;
	for (; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}


