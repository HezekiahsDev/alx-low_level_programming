#include "lists.h"

/**
 * list_len - compute lenght of list (node count)
 * @h: list
 * Return: list lenght
 */

size_t list_len(const list_t *h)
{
	size_t n_of_nodes;

	n_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		n_of_nodes++;
	}
	return (n_of_nodes);
}
