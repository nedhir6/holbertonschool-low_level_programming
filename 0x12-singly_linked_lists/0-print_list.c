#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements in a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		if ((h->str) == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
