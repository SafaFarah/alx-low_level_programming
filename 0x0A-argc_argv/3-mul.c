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
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
		exit(1);
	}
	printf("%d\n", a * b);
	exit(EXIT_SUCCESS);
}
