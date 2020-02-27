#include "holberton.h"
/**
 * _sqrt - square root of n.
 *@a: int
 *@b: int
 * Return: value of sqrt of n.
 */
int _sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	else
		return (_sqrt((a + 1), b));
}



/**
 * _sqrt_recursion - square root of n.
 *@n: int
 * Return: value of sqrt of n.
 */
int _sqrt_recursion(int n)
{
		if (n == 0)
			return (0);
		else
			return (_sqrt(1, n));
}
