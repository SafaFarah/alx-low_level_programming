#include "main.h"
/**
* flip_bits - returns number of bits to flip to get from number to another.
* @n: unsigned long intger
* @m: unsigned long intger
*
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_flip = n ^ m;
	unsigned int count = 0;

	while (num_flip > 0)
	{
		if ((num_flip & 1) == 1)
			count++;
		num_flip = num_flip >> 1;
	}
	return (count);
}
