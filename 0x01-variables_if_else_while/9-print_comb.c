#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{int n = 0;
for (n = '0' ; n <= '9' ; n++)
{putchar(n);
if (n <= '8')
{putchar(',');
putchar(' '); }
}
putchar('\n');
return (0); }
