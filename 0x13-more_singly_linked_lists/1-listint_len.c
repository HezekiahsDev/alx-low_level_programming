#include "lists.h"

/**
 * listint_len - node lenght
 * @h: node head
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ndx = h;
	size_t cnt = 0;

	while (ndx != NULL)
	{
		cnt += 1;
		ndx = ndx->next;
	}
	return (cnt);
}

