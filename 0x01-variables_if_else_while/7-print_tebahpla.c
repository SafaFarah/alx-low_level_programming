#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char z = 'z';
	char ch;
	/* for loop*/
	for (ch = z ; ch >= a ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
