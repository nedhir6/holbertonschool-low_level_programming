#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{int d1 = 0;
int d2 = 0;
for (d1 = 0 ; d1 < 99 ; d1++)
{
for (d2 = d1 + 1; d2 < 100 ; d2++)
{putchar(d1 / 10 + '0');
putchar(d1 % 10 + '0');
putchar(' ');
putchar(d2 / 10 + '0');
putchar(d2 % 10 + '0');
if (d1 != 98 || d2 != 99)
{putchar(',');
putchar(' '); }}}
putchar('\n');
return (0); }
