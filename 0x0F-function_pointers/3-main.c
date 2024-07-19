#include "3-calc.h"

/**
 * main - Performs a calculation based on command line arguments
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 on success, 98 if the number of arguments is wrong,
 *         99 if the operator is invalid, and 100 if division by zero
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", op_func(num1, num2));
	return (0);
}
