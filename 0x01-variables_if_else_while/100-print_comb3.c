#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{int d1 = 0;
int d2 = 0;
for (d1 = 0 ; d1 < 9 ; d1++)
{
for (d2 = d1 + 1; d2 < 10 ; d2++)
{putchar(d1 + '0');
putchar(d2 + '0');
if (d1 != 8)
{putchar(',');
putchar(' '); }}}
putchar('\n');
return (0); }
