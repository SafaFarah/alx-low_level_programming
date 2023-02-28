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
	int n;

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
	if (odd % 2 != 0)
	{
		n = (count - 1) / 2;
		for (; n < count; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}

