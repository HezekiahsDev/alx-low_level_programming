#include "lists.h"

/**
 * add_nodeint_end - new element at the end of a node
 * @head: pointer to head node
 * @n: content
 *
 * Return: pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem;
	listint_t *flag = *head;

	/*malloc for new elem*/
	new_elem = malloc(sizeof(listint_t));
	if (new_elem != NULL)
	{
		new_elem->n = n;
		new_elem->next = NULL;
	}
	else
		return (NULL);
	if (flag != NULL)
	{
		while (flag->next != NULL)
			flag = flag->next;
		flag->next = new_elem;
	}
	else
		*head = new_elem;
	return (new_elem);
}
