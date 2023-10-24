#include "lists.h"

/**
 * print_listint - print list members
 * @h: begining of list (head of node)
 *
 * Return: count of node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *flag = h;
	size_t index = 0;

	while (flag != NULL)
	{
		printf("%d\n", flag->n);
		index += 1;
		index = flag->next;
	}
	return (index);
}
