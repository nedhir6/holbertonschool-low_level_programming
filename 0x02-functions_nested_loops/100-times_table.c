#include "holberton.h"
/**
*print_times_table - time table
*@n: int
*/
void print_times_table(int n)
{
int d1 = 0;
int d2 = 0;
int d3 = 0;
if (n >= 0 && n <= 15)
{
while (d3 <= n)
{
d1 = 1;
_putchar('0');
while (d1 <= n)
{
d2 = d1 *d3;
_putchar(',');
_putchar(' ');
if (d2 < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(d2 + '0');
}
else if (d2 > 99)
{
_putchar((d2 / 100) + '0');
_putchar(((d2 / 10) % 10) + '0');
_putchar((d2 % 10) + '0');
}
else
{
_putchar(' ');
_putchar((d2 / 10) + '0');
_putchar((d2 % 10) + '0');
}
d1++;
}
_putchar('\n');
d3++;
}
}
}
