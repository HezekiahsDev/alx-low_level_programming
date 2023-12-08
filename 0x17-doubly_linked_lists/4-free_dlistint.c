#include "lists.h"

/**
 * free_dlistint - free a DLL
 * @head: head node
 *
 * Return: nothing
 */
void free_dlistind(dlistint_t *head)
{
	dlistint_t *temp;

	for (; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
