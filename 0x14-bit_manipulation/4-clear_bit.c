#include "holberton.h"
/**
 *clear_bit - sets the value of a paricular bit  to 0.
 *@index: index of the bit.
 *@n: decimal.
 *Return: the binary number.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int comp;

	if (index > 32)
		return (-1);
	comp = ~(1 << index);
	*n &= comp;
	return (1);
}
