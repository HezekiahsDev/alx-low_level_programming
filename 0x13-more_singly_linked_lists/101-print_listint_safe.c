#include "lists.h"

/**
 * free_listptr - free SL list
 * @head: head node
 * Return: nothing
 */
void free_listptr(listp_t **head)
{
	listptr_t *hold;
	listptr_t *list;

	if (head != NULL)
	{
		curr = *head;
		while ((hold = list) != NULL)
		{
			list = list->next;
			free(hold);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - print SL list
 * @head: head node
 * Return: node count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t indx = 0;
	listptr_t *headp, *fresh, *itrte;

	head = NULL;
	while (head != NULL)
	{
		fresh = malloc(sizeof(listptr_t));

		if (fresh == NULL)
			exit(98);

		fresh->ptr = (void *)head;
		fresh->next = headp;
		headp = fresh;

		itrte= headp;

		while (itrte->next != NULL)
		{
			itrte = itrte->next;
			if (head == itrte->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listptr(&headp);
				return (indx);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		indx++;
	}

	free_listptr(&headp);
	return (indx);
}
