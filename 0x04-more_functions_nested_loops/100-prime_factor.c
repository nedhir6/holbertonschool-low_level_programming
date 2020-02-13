#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
long n = 612852475143;
int a = 2;
while (a * a < n)
{
while (n % a == 0)
n = n / a;
i = a + 1;
}
printf("%ld\n", n);
return (0);
}
