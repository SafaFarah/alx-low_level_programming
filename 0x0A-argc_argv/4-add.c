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
	int sum = 0;

	if (argc < 0)
		printf("%d\n", 0);
	if (*argv < '48' || *argv > '57')
	{
		printf("Error\n");
		return (1);
	}
	while (argc--)
	{
		sum = sum + (int)*argv;
		*argv++;
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
