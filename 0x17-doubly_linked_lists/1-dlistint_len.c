#include "lists.h"

/**
 * dlistint_len - Number of elements in a DLL
 * @h: head node
 * Return: node index
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t indx;

	for (indx = 0; h != NULL; indx++, h = h->next)
		;
	return (indx);
}
