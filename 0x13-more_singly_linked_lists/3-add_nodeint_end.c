#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: node bead
 * @n: content
 * Return: ptr to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_n;
	listint_t *ndx = *head;

	node_n = malloc(sizeof(listint_t));
	if (node_n != NULL)
	{
		node_n->n = n;
		node_n->next = NULL;
	}
	else
		return (NULL);
	if (ndx != NULL)
	{
		while (ndx->next != NULL)
			ndx = ndx->next;
		ndx->next = node_n;
	}
	else
		*head = node_n;
	return (node_n);
}
