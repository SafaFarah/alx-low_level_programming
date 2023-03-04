#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	int n;
	int count = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 15 == 0)
			count = count + n;
		else
		{
			if (n % 5 == 0)
				count = count + n;
			if (n % 3 == 0)
				count = count + n;
		}
	}
	printf("%d\n", count);
	return (0);
}

