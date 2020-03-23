#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds new node at the beginningof a list.
 * @head: head of the list.
 * @n: element
 * Return: adress of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;
	int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
