#include "main.h"


/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char a = 'a';
	char z = 'z';
	char ch = a;
	/* for loop*/
	for (ch = a ; ch <= z ; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
