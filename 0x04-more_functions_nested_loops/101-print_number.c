#include "holberton.h"
/**
*print_number - prints numbers
*@n : int
*/
void print_number(int n)
{
int a;
int b;
int c = 1;
int d = n % 10;

n /= 10;
a = n;
if (d < 0)
{
d *= -1, a *= -1, n *= -1;
_putchar('-');
}
if (a > 0)
{
while (a / 10 != 0)
{
a /= 10, c *= 10;
}
while (c > 0)
{
b = n / c;
_putchar('0' + b);
n -= b *c;
c /= 10;
}
}
_putchar('0' + d);
}
