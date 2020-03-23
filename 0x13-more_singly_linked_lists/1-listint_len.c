#include <stdio.h>
#include "lists.h"
/**
 * listint_len - number of elements.
 * @h: head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
