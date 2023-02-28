#include "main.h"
/**
 * puts_half -  a function that prints half of a string
 *@str: string pointer
 */
void puts_half(char *str)
{
	int i = 0;
	int count = 0;
	int j = 0;
	int odd = 0;
	int k;

	while (*(str + i) != '\0')
	{
		i++;
		count++;
	}
	for (j = 0; j < count; j++)
	{
		if (j % 2 != 0)
			odd++;
		else
			continue;
	}
	for (k = odd; k < count; k++)
	{
		_putchar(*(str + k));
	}
	_putchar('\n');
}

