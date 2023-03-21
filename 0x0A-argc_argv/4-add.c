#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

/**
 * is_num - check if it number
 * @s: string
 *
 * Return: zero
 */
int is_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}


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
			if (is_num(argv[i]))
			{
				num = atoi(argv[i]);
				sum = sum + num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
