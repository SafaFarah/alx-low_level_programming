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
	/* for loop */
	for (ch = a ; ch <= z ; ch++)
	{
	/* if condition */
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
