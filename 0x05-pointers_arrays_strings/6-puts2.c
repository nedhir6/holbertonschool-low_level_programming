#include "holberton.h"
/**
*puts2 - prints every other charachter
*@str: char
*/
void puts2(char *str)
{
int a = 0;

for (a = 0; str[a]; a=a+2)
{
_putchar(str[a]);
}
_putchar('\n');
}
