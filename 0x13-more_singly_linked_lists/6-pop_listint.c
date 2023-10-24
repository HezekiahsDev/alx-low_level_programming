#include "lists.h"
/**
 * pop_listint - remove head node of SL list
 * @head : pointer to head node
 * Return: data of head node
 * or 0 on error (SL list is empty)
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int indx;

tmp = *head;

if (tmp == NULL)
return (0);

*head = tmp->next;
indx = temp->indx;
free(tmp);
return (indx);
}
