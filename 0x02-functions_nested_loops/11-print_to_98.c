#include <stdio.h>
#include "holberton.h"
/**
*print_to_98 - natural numbers to 98
*@n: int
*Return: 1
*/
void print_to_98(int n)
{int a;
if(n == 98)
{printf("98\n");
}
else if (n < 98)
{
for (a = n; a < 98; a++)
printf ("%d, ",a);
printf("98\n");
}
else
{
for (a = n; a > 98; a--)
printf ("%d, ",a);
printf("98\n");
}
}
