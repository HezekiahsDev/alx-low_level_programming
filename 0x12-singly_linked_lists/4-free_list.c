#include "lists.h"

/**
 * free_list - free singly linked list
 * @head: head node
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *working_node;

	while ((working_node = head) != NULL)
	{
		head = head->next;
		free(working_node->str);
		free(working_node);
	}
}
