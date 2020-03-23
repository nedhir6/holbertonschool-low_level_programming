#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees all node in a linked list.
 * @head: head of the list.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->n);
		free(tmp);
	}
}
