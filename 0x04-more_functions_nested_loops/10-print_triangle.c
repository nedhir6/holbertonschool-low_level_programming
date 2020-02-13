#include "holberton.h"
/**
*print_triange - prints triangle
*@n : int
*/
void print_triangle(int n)
{
int a;
int b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if(b < n-a-1)
_putchar(' ');
else
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
