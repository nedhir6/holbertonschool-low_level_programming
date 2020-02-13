#include "holberton.h"
/**
*print_square - prints square
*@n : int
*/
void print_square(int n)
{
int a;
int b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
