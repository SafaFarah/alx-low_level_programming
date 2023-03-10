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
	argv = argv - 1;
	printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}
