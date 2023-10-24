#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at an index
 * @head : head node
 * @index: index
 * Return: status - 1 success, -1 failure]
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *del, *clip = *head;
unsigned int list;

if (clip == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(clip);
return (1);
}

for (list = 0; list < (index - 1); list++)
{
if (clip->next == NULL)
return (-1);

clip = clip->next;
}

del = clip->next;
clip->next = del->next;
free(del);
return (1);
}
