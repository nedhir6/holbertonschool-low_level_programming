#include "holberton.h"
/**
*jack_bauer - every minute
*@n : int
*Return: 1
*/
void jack_bauer(void)
{
int d1 = 0;
int d2 = 0;
for (d1 = 0 ; d1 < 99 ; d1++)
{
for (d2 = d1 + 1; d2 < 100 ; d2++)
{_putchar(d1 / 10 + '0');
_putchar(d1 % 10 + '0');
_putchar(':');
_putchar(d2 / 10 + '0');
_putchar(d2 % 10 + '0');
if (d1 != 98 || d2 != 99)
{_putchar('\n'); }}}
}
