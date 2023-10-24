#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: node head
 * Return: ptr to rev node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *ndx;

	p = NULL;
	ndx = NULL;

	while (*head != NULL)
	{
		ndx = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = ndx;
	}

	*head = p;
	return (*head);
}
