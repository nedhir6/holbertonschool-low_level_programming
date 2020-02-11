#include "holberton.h"
/**
*jack_bauer - every minute
*Return: 1
*/
void jack_bauer(void)
{
int d1 = 0;
int d2 = 0;
for (d1 = 0 ; d1 < 24 ; d1++)
{
for (d2 = 0 + 1; d2 < 60 ; d2++)
{_putchar(d1 / 10 + '0');
_putchar(d1 % 10 + '0');
_putchar(':');
_putchar(d2 / 10 + '0');
_putchar(d2 % 10 + '0');
_putchar('\n');
}
}
}
