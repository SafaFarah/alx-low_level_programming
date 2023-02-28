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
	odd = odd +1;
		for (;odd < count; odd++)
	{
		_putchar(*(str + odd));
	}
	}
	_putchar('\n');
}

