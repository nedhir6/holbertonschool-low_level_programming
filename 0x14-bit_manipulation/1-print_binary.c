#include "holberton.h"
/**
 *print_binary - prints the binary rep of a dec.
 *@n: decimal number.
 *Return: the binary number.
 */
void print_binary(unsigned long int n)
{
	int first_1 = 0;
	unsigned long int biggest;

	biggest = 4611686018427387904;
	biggest <<= 1;
	while (biggest > 0)
	{
		if ((n & biggest) == biggest)
		{
			_putchar('1');
			first_1 = 1;
		}
		else if (first_1 == 1 || biggest == 1)
			_putchar('0');
		biggest >>= 1;
	}
}
