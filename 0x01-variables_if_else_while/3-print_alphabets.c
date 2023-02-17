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
	char A = 'A';
	char Z = 'Z';
	char chU;
	/* for loop*/
	for (ch = a ; ch <= z ; ch++)
		putchar(ch);
	/*for loop*/
	for (chU = A ; chU <= Z ; chU++)
		putchar(chU);
	putchar('\n');
	return (0);
}
