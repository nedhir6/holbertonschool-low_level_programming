#include "holberton.h"
/**
*print_most_numbers - void
*/
void print_most_numbers(void)
{char ch1 = '0';
char ch2 = '\n';
for (ch1 = '0' ; ch1 <= '9' ; ch1++)
{
if ((ch1 != '2') && (ch1 != '4'))
_putchar(ch1);
}
_putchar(ch2);
}
