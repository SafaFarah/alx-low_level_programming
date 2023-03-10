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
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
