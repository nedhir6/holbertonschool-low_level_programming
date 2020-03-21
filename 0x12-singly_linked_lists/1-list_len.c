#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements.
 * @h: head of the list.
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
