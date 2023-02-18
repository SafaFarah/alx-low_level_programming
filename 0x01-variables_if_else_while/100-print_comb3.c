#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	/* for loop*/
	for (i = 48 ; i < 57 ; i++)
	{
		/* for loop*/
		for (j = 49 ; j <= 57 ; j++)
		{
			if (j <= i)
				continue;
			putchar(i);
			putchar(j);
			if (i == 56)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
