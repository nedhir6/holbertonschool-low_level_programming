#include "holberton.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to the string containing the binary number.
 *Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int dec = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
		i++;
	}
	return (dec);
}
