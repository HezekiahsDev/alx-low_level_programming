#include "lists.h"

/**
 * print_listint - print list
 * @h: head
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ndx = h;
	size_t cnt = 0;

	while (ndx != NULL)
	{
		printf("%d\n", ndx->n);
		cn5 += 1;
		cursor = ndx->next;
	}
	return (cnt);
}
