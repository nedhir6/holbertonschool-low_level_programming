#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds new node at the end of a list.
 * @head: head of the list.
 * @str: element
 * Return: adress of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;
	int i = 0;

	ptr = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	new->str = strdup(str);
	new->len = i;
	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (new);
}
