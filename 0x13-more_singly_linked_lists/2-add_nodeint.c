#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a SL list
 * @head: pointer to head node
 * @n: int to be added
 * Return: pointer to the new list element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elem;

	/*malloc for new element*/
	new_elem = malloc(sizeof(listint_t));
	if (new_elem != NULL)
	{
		new_elem->n = n;
		new_elem->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_elem->next = *head;
	*head = new_elem;
	return (new_elem);
}
