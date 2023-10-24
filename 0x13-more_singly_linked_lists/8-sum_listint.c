#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum up the data in a SL list
 * @head : head node
 * Return: sum of data
 * or 0 if error occurs (empty list)
 */
int sum_listint(listint_t *head)
{
int sum;

sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
