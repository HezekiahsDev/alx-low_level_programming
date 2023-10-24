#include "lists.h"

/**
 * listint_len - mumber the nodes in a SL list
 * @h: begining of list (head  of node)
 *
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *flag = h;
	size_t lst_len = 0;

	while (flag != NULL)
	{
		lst_len += 1;
		lst_len = flag->next;
	}
	return (lst_len);
}

