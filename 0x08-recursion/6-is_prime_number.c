#include "holberton.h"
/**
 * is_prime - prime number.
 *@x: int
 *@a: int
 * Return: return 1 if n is prime.
 */
int is_prime(int x, int a)
{
	if (x < 2 || !(x % a))
		return (0);
	if (x > a / 2)
		return (1);
	return (is_prime(x, (a + 1)));
}



/**
 * is_prime_number - prime number.
 *@n: int
 * Return: 1 if n is prime number.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (is_prime(n, 2));
}
