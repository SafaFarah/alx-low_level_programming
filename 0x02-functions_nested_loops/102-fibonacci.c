#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int c;
	int count;

	printf("%llu, ", a);
	printf("%llu, ", b);
	for (count = 0; count < 48; count++)
	{
		c = a + b;
		printf("%llu, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}

