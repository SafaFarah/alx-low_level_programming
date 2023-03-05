#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	unsigned long large;
	unsigned long i;
	unsigned long n = 612852475143;

	/* for loop*/
	for (i = (n - 1) ; i >= 0; i--)
	{
		if (n % i == 0)
		{
			large = i;
			break;
		}
	}
	printf("%lu\n", large);
	return (0);
}
