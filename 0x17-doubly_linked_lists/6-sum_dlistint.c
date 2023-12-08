#include "lists.h"

/**
 * sum_dlistint - sum of all member of DLL
 * @head: hea node
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	for (; head != NULL; head = head->next)
	{
		result = result + head->n;
	}
	return (result);
}
