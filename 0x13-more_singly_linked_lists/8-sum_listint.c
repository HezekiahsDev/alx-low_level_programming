#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - add uo all the node
 * @head : node head
 * Return: result
 */
int sum_listint(listint_t *head)
{
int sum_up;

sum_up = 0;

while (head)
{
sum_up += head->n;
head = head->next;
}
return (sum_up);
}
