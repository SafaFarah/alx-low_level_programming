#include "main.h"
#include <stdlib.h>
/**
* binary_to_uint - a function converts a binary to int
* @b: pointer to string
*
* Return: converted number or 0.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	int len = 0;
	int base = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if ((b[i] - 48) == 0 || (b[i] - 48) == 1)
		{
			num = num + (b[i] - 48) * (1 << base);
			base++;
		}
		else
			return (0);
	}
	return (num);
}
