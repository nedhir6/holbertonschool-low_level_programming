#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
* linear_search - searches for a value in array using linear search alg
* @array: array of integers
* @size: size of array
* @value: value to searche
* Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (value == array[i])
{
return (i);
}
}
return (-1);
}
