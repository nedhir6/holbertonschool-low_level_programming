#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
*print_arr - prints array
*@array: full array
*@a: index to start printing
*@b: last index to print
*/
void print_arr(int *array, size_t a, size_t b)
{
unsigned int i;
printf("Searching in array: ");
for (i = a; i < b; i++)
printf("%i, ", array[i]);
printf("%i\n", array[i]);
}


/**
* binary_search - searches for a value in a sorted array
* @array: array of integers
* @size: size of array
* @value: value to search
* Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
unsigned int i, j, k;

if (array == NULL)
{
return (-1);
}
for (i = 0, k = size - 1; i <= k;)
{
print_arr(array, i, k);
j = (i + k) / 2;
if (value > array[j])
i = j + 1;
else if (value < array[j])
k = j - 1;
else
return (j);
}
return (-1);
}
