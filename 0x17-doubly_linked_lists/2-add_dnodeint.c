#include "lists.h"

/**
 * add_dnodeint - add node at the begining of a DLL
 * @head: head node
 * @n: member value
 *
 * Return: pointer to new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)/*check validity*/
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
