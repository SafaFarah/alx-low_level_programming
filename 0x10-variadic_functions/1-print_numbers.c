#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints number, followed by a new line.
 * @separator: char
 * @n: const number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x;
	va_list args;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
