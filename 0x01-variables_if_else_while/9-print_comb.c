#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	/* for loop*/
	putchar(48);
	for (i = 49 ; i <= 57 ; i++)
	{
		putchar(44);
		putchar(32);
		putchar(i);
	}
	putchar('\n');
	return (0);
}
