#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 *@str: string pointer
 */
void puts2(char *str)
{
	int i = 0;
	int count = 0;
	int j;

	while (*(str + i) != '\0')
	{
		i++;
		count++;
	}
	for (j = 0; j < count ; j++)
	{
		if (j % 2 == 0)
			_putchar(*(str + j));
		else
			continue;
	}
}
