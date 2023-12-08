#include "lists.h"

/**
 * get_dnodeint_at_index - fetch node at an index
 * @head: head node
 * @index: index of node
 * Return: node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current_node = head;

	for (i = 0; current_node != NULL && i < index; i++)
	{
		current_node = head->next;
	}
	return ((i == index) ? current_node : NULL);
}
