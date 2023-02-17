#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char f = 'f';
	char ch;
	int i;
	/* for loop*/
	for (i = 48 ; i <= 57 ; i++)
		putchar(i);
	/*for loop*/
	for (ch = a ; ch <= f ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
