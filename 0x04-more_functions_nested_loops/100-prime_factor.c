#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i;

	for (i = 2; i < n; i++)
	{
		while (n > 1)
		{
			if (n % i == 0)
				n = n / i;
			else
				break;
		}
	}
	printf("%lu\n", n);
	return (0);
}
