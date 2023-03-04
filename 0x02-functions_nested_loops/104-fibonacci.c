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
	for (count = 0; count < 96; count++)
	{
		c = a + b;
		if (count == 95)
			printf("%u", c);
		else
			printf("%u, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
