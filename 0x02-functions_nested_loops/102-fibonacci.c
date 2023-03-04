#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int c;
	int count;

	printf("%u, ", a);
	printf("%u, ", b);
	for (count = 0; count < 48; count++)
	{
		c = a + b;
		printf("%u, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

