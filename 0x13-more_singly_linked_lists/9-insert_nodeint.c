#include "lists.h"
/**
 * insert_nodeint_at_index - insert a  node
 * @head: pointer to the head of the list
 * @idx: node index
 * @n: insert
 * Return: ptr to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *insrt, *tmpt = *head;
unsigned int block;

insrt = malloc(sizeof(listint_t));

if (insrt == NULL)
return (NULL);

insrt->n = n;

if (idx == 0)
{
insrt->next = tmpt;
*head = insrt;
return (insrt);
}

for (block = 0; block < (idx - 1); block++)
{
if (tmpt == NULL || tmpt->next == NULL)
return (NULL);

tmpt = tmpt->next;
}

insrt->next = tmpt->next;
tmpt->next = insrt;

return (insrt);
}
