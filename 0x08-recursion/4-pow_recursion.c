#include "holberton.h"
/**
 * _pow_recursion - x raised to the power of y.
 *@x: int
 *@y: int
 * Return: value of x.
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y != 0)
			return (x * (_pow_recursion(x, (y - 1))));
		else
			return (1);
	}
	else
		return (-1);
}
