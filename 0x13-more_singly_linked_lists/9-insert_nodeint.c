#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at any position
 * @head: head node
 * @idx: index of insertion
 * @n: value for the new node to be added
 * Return: new node
 * or NULL on error.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *fresh, *tmp = *head;
unsigned int node_indx;

fresh= malloc(sizeof(listint_t));

if (fresh == NULL)
return (NULL);

fresh->n = n;

if (idx == 0)
{
fresh->next = tmp;
*head = fresh;
return (fresh);
}

for (node_indx = 0; node_indx < (idx - 1); node_indx++)
{
if (tmp == NULL || tmp->next == NULL)
return (NULL);

tmp = tmp->next;
}

fresh->next = tmp->next;
tmp->next = fresh;

return (fresh);
}
