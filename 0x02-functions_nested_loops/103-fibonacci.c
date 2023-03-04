#include <stdio.h>

/**
 * main - main function
 *
 *Return: int 0;
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	long sum = 2;

while (c <= 4000000)
{
	c = a + b;
	a = b;
	b = c;
	if (c % 2 == 0)
		sum = sum + c;
}
printf("%ld", sum);
printf("\n");
return (0);
}
