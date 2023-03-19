#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: count
 * @argv: string
 *
 * Return: int number
 */
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
