#include "lists.h"

/**
 * reverse_listint - reverse SL list
 * @head: head node
 *
 * Return: first element
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *indx;

	ptr = NULL;
	indx = NULL;

	while (*head != NULL)
	{
		indx = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = indx;
	}

	*head = ptr;
	return (*head);
}
