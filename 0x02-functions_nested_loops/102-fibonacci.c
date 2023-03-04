#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int count;

	printf("%d, ", a);
	printf("%d, ", b);
	for (count = 0; count < 48; count++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

