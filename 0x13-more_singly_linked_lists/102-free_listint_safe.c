#include "lists.h"

/**
 * free_listp2 - free a list
 * @head: node head
 * Return: nothing
 */
void free_listp2(listp_t **head)
{
	listp_t *tmpt;
	listp_t *node;

	if (head != NULL)
	{
		node = *head;
		while ((tmpt = node) != NULL)
		{
			node = node->next;
			free(tmpt);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - safe free list
 * @h: node head
 * Return: free byte
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_block = 0;
	listp_t *ptr_head, *new, *append;
	listint_t *node;

	ptr_head = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr_head;
		ptr_head = new;

		append = ptr_head;

		while (append->next != NULL)
		{
			append = append->next;
			if (*h == append->p)
			{
				*h = NULL;
				free_listp2(&ptr_head);
				return (node_block);
			}
		}

		node = *h;
		*h = (*h)->next;
		free(node);
		node_block++;
	}

	*h = NULL;
	free_listp2(&ptr_head);
	return (node_block);
}
