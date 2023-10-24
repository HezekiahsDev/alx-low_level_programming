#include "lists.h"
/**
 * pop_listint - delete a node
 * @head : node head
 * Return: result
 */
int pop_listint(listint_t **head)
{
listint_t *tmpt;
int ndx;

tmpt = *head;

if (tmpt == NULL)
return (0);

*head = tmpt->next;
n = tmpt->n;
free(tmpt);
return (ndx);
}
