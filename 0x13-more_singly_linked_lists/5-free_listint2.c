#include "lists.h"
/**
 * free_listint2 - free another list
 * @head : node head
 * Return: null
 */
void free_listint2(listint_t **head)
{
listint_t *tmpt;

if (head == NULL)
return;

while (*head)
{
tmpt = *head;
*head = (*head)->next;
free(tmpt);
}
head = NULL;
}
