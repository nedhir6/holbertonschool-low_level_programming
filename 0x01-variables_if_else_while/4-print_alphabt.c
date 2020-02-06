#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{char ch1 = 'a';
char ch2 = '\n';
char ch3 = 'q';
char ch4 = 'e';
for (ch1 = 'a' ; ch1 <= 'z' ; ch1++)
{
if (ch1 != ch4 && ch1 != ch3)
putchar(ch1); }
putchar(ch2);
return (0); }
