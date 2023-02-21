#include "main.h"


/**
 * print_alphabet - Entry point
 */
void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';
	char ch = a;
	/* for loop*/
	for (ch = a ; ch <= z ; ch++)
		_putchar(ch);
	_putchar('\n');
}
