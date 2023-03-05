#include <stdio.h>

/**
 * main - main function
 *
 * Return: int 0
 */
int main(void)
{
	double a  = 1;
	double b = 2;
	double c;
	int count;

	printf("%lf, ", a);
	printf("%lf, ", b);
	for (count = 0; count < 96; count++)
	{
		c = a + b;
		if (count == 95)
			printf("%lf,", c);
		else
			printf("%lf, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
