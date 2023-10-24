#include "lists.h"

/**
 * free_listp - free list
 * @head: node head
 * Return: null
 */
void free_listp(listp_t **head)
{
	listp_t *tmpt;
	listp_t *node;

	if (head != NULL)
	{
		node = *head;
		while ((tmpt = node) != NULL)
		{
			node = node->next;
			free(node);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - safe print list
 * @head: node head
 * Return: node count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_block = 0;
	listp_t *ptr_head, *print, *append;

	ptr_head = NULL;
	while (head != NULL)
	{
		print = malloc(sizeof(listp_t));

		if (print == NULL)
			exit(98);

		print->p = (void *)head;
		print->next = ptr_head;
		ptr_head = print;

		append = ptr_head;

		while (append->next != NULL)
		{
			append = append->next;
			if (head == append->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr_head);
				return (node_block);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node_block++;
	}

	free_listp(&ptr_head);
	return (node_block);
}
