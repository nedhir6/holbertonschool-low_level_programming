#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees all node in a linked list.
 * @head: head of the list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
