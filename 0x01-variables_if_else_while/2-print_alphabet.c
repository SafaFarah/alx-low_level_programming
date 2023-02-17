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
	char ch = a;
	/* for loop*/
	for (ch = a ; ch <= z ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
