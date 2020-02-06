#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{char ch1 = 'a';
char ch2 = 'A';
char ch3 = '\n';
for (ch1 = 'a' ; ch1 <= 'z' ; ch1++)
{putchar(ch1); }
for (ch2 = 'A' ; ch2 <= 'Z' ; ch2++)
{putchar(ch2); }
putchar(ch3);
return (0); }
