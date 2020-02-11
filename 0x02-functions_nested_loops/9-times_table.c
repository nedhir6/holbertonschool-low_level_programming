#include "holberton.h"
/**
*times_table - time table
*Return: 1
*/
void times_table(void)
{
int d1 = 0;
int d2 = 0;

for (d1 = 0; d1 <= 9; d1++)
{
_putchar('0');
_putchar(',');
for (d2 = 1; d2 <= 9; d2++)
{
_putchar(' ');
if (d1 * d2 < 10)
{
_putchar(' ');
_putchar(d1 * d2  + '0');
}
else
{
_putchar(d1 * d2 / 10 + '0');
_putchar(d1 * d2 % 10 + '0');
}
if (d2 < 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
