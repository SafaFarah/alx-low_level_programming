#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long  c;
	int count;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (count = 0; count < 48; count++)
	{
		c = a + b;
		printf("%ld, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

