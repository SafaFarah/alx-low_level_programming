#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	long int a  = 1;
	long int b = 2;
	long int c;
	int count;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (count = 0; count < 96; count++)
	{
		c = a + b;
		if (count == 95)
			printf("%ld", c);
		else
			printf("%ld, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
