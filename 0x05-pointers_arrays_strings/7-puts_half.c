#include "holberton.h"
/**
*puts_half - prints the second half of a string
*@str: char
*/
void puts_half(char *str)
{
	int i = 0, n;

	for (i = 0; str[i]; ++i)
		{}
	if ((i % 2) != 0)
	n = (i - 1) / 2;
	else
	n = i / 2;
	while (*(str + n))
	{
	_putchar(str[n]);
	n++;
	}
	_putchar('\n');
}
