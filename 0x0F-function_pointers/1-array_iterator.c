#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter on array.
 * @array: array.
 * @size: size.
 * @action: action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == 0 || action == NULL)
		return;
	unsigned int i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
