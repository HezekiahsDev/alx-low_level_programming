#include "lists.h"

/**
 * print_dlistint - print list of elements in a DLL
 * @h: head node
 * Return: node index
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t indx = 0;

	while (h)
	{
		indx++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (indx);
}
