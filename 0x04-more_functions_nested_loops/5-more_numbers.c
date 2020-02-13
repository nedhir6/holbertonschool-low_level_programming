#include "holberton.h"
/**
*more_numbers - void
*/
void more_numbers(void)
{char ch = '\n';
int a = 0;
int b = 0;
for (a = 0; a < 10; a++)
{
for (b = 0; b <= 14; b++)
{
if (b / 10 != 0)
{_putchar(b / 10 + '0');
}
_putchar(b % 10 + '0');
}
_putchar(ch);
}
}
