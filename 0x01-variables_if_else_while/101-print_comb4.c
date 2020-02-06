#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{int d1 = 0;
int d2 = 0;
int d3 = 0;
for (d1 = 0 ; d1 < 8 ; d1++)
{
for (d2 = d1 + 1; d2 < 9 ; d2++)
{
for (d3 = d2 + 1; d3 < 10; d3++)
{putchar(d1 + '0');
putchar(d2 + '0');
putchar(d3 + '0');
if (d1 != 7)
{putchar(',');
putchar(' '); }}}}
putchar('\n');
return (0); }
