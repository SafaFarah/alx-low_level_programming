#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: char
 * @n: const number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;
	char c = '59';

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
			x = "(nil)";
		if (separator == NULL || i == (n - 1))
			printf("%s", x);
		else if (separator == c)
			printf("%s%c ", x, 59);
		else
			printf("%s%s ", x, separator);
	}
	va_end(args);
	printf("\n");
}

