#include "holberton.h"
/**
 *flip_bits - check number of bits to flip to get from n to m.
 *@n: first int.
 *@m: second int.
 *Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int i = 0;

	xor = n ^ m;
	while (xor != 0)
	{
		if ((xor & 1) == 1)
			i++;
		xor >>= 1;
	}
	return (i);
}
