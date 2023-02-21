#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	char z = 'z';
	char ch = a;
	int i;
	/* for loop*/
	for (i = 0 ; i < 10 ; i++)
	{
		/* for loop */
		for (ch = a ; ch <= z ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
