#include "lists.h"

/**
 * free_listint - free a list
 * @head: head of the list
 * Return: nill
 */
void free_listint(listint_t *head)
{
	listint_t *tmpt;

	while (head != NULL)
	{
		tmpt = head;
		head = head->next;
		free(tmpt);
	}
}
