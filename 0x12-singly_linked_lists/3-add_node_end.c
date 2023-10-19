#include "lists.h"
/**
 * add_node_end - add a ne node at the end of a list
 * @head: head node
 * @str: string to be added
 * Return: head node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh_node, *old_node;
	size_t count;

	/*malloc for new node*/
	fresh_node = malloc(sizeof(list_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	fresh_node->len = count;
	fresh_node->next = NULL;
	old_node = *head;

	if (old_node == NULL)
	{
		*head = fresh_node;
	}
	else
	{
		while (old_node->next != NULL)
			old_node = old_node->next;
		old_node->next = fresh_node;
	}

	return (*head);
}
