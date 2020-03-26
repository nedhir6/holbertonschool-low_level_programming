#include "holberton.h"
/**
 *get_bit - give the value of a paricular bit.
 *@index: index of the bit.
 *@n: decimal.
 *Return: the binary number.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 32)
		return (-1);
	b = n >> index;
	return (b & 1);
}
