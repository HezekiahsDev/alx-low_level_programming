#include "lists.h"
/**
 * add_node - add new node at the start of a list
 * @head: head node
 * @str: string to be added
 * Return: address of head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh_node;
	size_t count;

	fresh_node = malloc(sizeof(list_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	fresh_node->len = count;
	fresh_node->next = *head;
	*head = fresh_node;

	return (*head);
}
