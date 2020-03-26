#include "holberton.h"
/**
 *set_bit - sets the value of a paricular bit  to 1.
 *@index: index of the bit.
 *@n: decimal.
 *Return: the binary number.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n |= 1 << index;
	return (1);
}
