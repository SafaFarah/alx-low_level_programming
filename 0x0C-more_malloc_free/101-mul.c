#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_digit(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *ptr1, *ptr2;
	unsigned long num1, num2;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	num1 = strtol(argv[1], &ptr1, 10);
	num2 = strtol(argv[2], &ptr2, 10);
	if (*ptr1 != '\0' || *ptr2 != '\0')
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	printf("%ld\n", num1 * num2);
	return (0);
}
