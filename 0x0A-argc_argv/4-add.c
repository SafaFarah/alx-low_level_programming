#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

/**
 * main - main function
 * @argc: count
 * @argv: string
 *
 * Return: int number
 */
int main(int argc, char **argv)
{
	int i;
	int num;
	int sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				num = atoi(argv[i]);
				sum = sum + num;
			}
			else
			{
				printf("Erorr\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
