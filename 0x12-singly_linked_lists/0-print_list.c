#include "lists.h"
/**
 * print_list - print all list elements
 * @h: list (singly linked)
 * Return: count of string elements
 */

size_t print_list(const list_t *h)
{
	size_t n_of_elem;

	n_of_elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_of_elem++;
	}
	return (n_of_elem);
}
