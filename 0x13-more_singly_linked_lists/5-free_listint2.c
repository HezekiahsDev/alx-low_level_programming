#include "lists.h"
/**
 * free_listint2 - free SL list
 * @head : pointer to head node of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;

while (*head)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
head = NULL;
}
