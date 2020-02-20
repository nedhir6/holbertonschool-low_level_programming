#include "holberton.h"
/**
*reverse_array - reverses array of int
*@a: pointer to char
*@n: pointer to char
*/
void reverse_array(int *a, int n)
{
int i = 0, tmp;
for (i = 0; i < n / 2; ++i)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
