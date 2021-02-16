#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
/**
*linear_search - searches for a value in an array of integers
*@array: array of integers
*@size: size of array
*@value: value to search
*Return: index of value
*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
