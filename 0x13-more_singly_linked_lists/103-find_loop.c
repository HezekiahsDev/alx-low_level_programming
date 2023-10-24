#include "lists.h"
/**
 * find_listint_loop - search for loops in a SLL
 * @head : head node
 * Return: start of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *a, *b;

if (head == NULL || head->next == NULL)
return (NULL);

a = head->next;
b = (head->next)->next;

while (b)
{
if (a == b)
{
a = head;

while (a  != b)
{
a = a->next;
b = b->next;
}

return (a);
}

a = a->next;
b = (b->next)->next;
}

return (NULL);
}
