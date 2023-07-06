#include "main.h"
/**
* get_bit - function returns the value of a bit at a given index
* @n: unsigned long intger
* @index: a given index
*
* Return: the value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (n == 0)
		return (0);
	n = n >> index;
	if ((n & 1) == 0)
		return (0);
	else
		return (1);
}
