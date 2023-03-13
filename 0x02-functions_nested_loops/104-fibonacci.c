#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int i = 1000000000;
	unsigned long int a1, a2, b1, b2;
	int count;

	printf("%lu", a);
	for (count = 1; count < 91; count++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}
	a1 = a / i;
	a2 = a % i;
	b1 = b / i;
	b2 = b % i;
	for (count = 91; count < 98; count++)
	{
		printf(", %lu", b1);
		printf("%lu", b2);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}
