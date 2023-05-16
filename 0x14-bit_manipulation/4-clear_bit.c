#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index.
 * @n: pointer of unsigned long intger
 * @index: a given index
 *
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = (*n & ~(1 << index)) | (0 << index);
	return (1);
}
