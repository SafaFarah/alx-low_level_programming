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
	int k;

	/* for loop*/
	for (i = 48 ; i < 56 ; i++)
	{
		/* for loop*/
		for (j = 49 ; j <= 56 ; j++)
		{
			/* for loop*/
			for (k = 50 ; k <= 57 ; k++)
			{
				if (j > i && k > j && k > i)
				{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
					break;
				putchar(44);
				putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
