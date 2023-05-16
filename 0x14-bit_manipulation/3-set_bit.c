#include "main.h"

/**
 * set_bit - function  sets the value of a bit to 1 at a given index
 * @n: unsigned long intger
 * @index: a given index
 *
 * Return: the value of a bit at a given index.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = (*n & ~(1 << index)) | (1 << index);
	return (1);
}
