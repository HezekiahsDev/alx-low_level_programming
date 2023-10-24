#include "lists.h"

/**
 * add_nodeint - add node to the begining of a list
 * @head: node head
 * @n: content
 * Return: ptr to new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_n;

	node_n = malloc(sizeof(listint_t));
	if (node_n != NULL)
	{
		node_n->n = n;
		node_n->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		node_n->next = *head;
	*head = node_n;
	return (node_n);
}
