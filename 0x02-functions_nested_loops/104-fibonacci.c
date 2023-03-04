#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	int count;

	printf("%lu, ", a);
	printf("%lu, ", b);
	for (count = 0; count < 96; count++)
	{
		c = a + b;
		if (count == 95)
			printf("%lu,", c);
		else
			printf("%lu, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
