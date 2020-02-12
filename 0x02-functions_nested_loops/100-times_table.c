#include "holberton.h"
/**
*print_times_table - times table
*@n: int
*Return: 1
*/
void print_times_table(int n)
{
int d1 = 0;
int d2 = 0;
int d3 = 0;
if (n >= 0 && n <= 1)
{
while (d1 <= n)
{
d2 = 1;
_putchar('0');
while (d2 <= n)
{
d3 = d1 * d2;
_putchar(',');
putchar(' ');
if (d3 < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(d3 + '0');
}
else if (d3 > 99)
{
_putchar((d3 / 100) + '0');
_putchar(((d3 / 10) % 10) + '0');
_putchar((d3 % 10) + '0');
}
else
{
_putchar(' ');
_putchar((d3 / 10) + '0');
_putchar((d3 % 10) + '0');
}
d2++;
}
_putchar('\n');
d1++;
}
}
}
