#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* for loop*/
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		if else(i % 5 == 0)
			printf("Buzz");
		if else(i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
