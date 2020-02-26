#include "holberton.h"
/**
 * factorial - factorial of n.
 *@n: int
 * Return: factorial.
 */
int factorial(int n)
{
if (n > 0)
{
if (n == 1)
return (1);
else
return (n * factorial(n - 1));
}
else
return (-1);
}
