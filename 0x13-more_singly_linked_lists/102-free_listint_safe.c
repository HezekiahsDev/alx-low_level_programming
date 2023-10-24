#include "lists.h"

/**
 * free_listptr2 - free SL list
 * @head: head nide
 *
 * Return: nothing
 */
void free_listptr2(listptr_t **head)
{
	listptr_t *hold;
	listptr_t *list;

	if (head != NULL)
	{
		list = *head;
		while ((hold = list) != NULL)
		{
			list = list->next;
			free(hold);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - free SL list
 * @h: head node
 *
 * Return: no of byte freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t indx = 0;
	listp_t *headp *fresh, *itrte;
	listint_t *listt;

	headp = NULL;
	while (*h != NULL)
	{
		fresh = malloc(sizeof(listptr_t));

		if (fresh == NULL)
			exit(98);

		fresh->ptr = (void *)*h;
		fresh->next = headp;
		headp = fresh;

		itrte = headp;

		while (itrte->next != NULL)
		{
			itrte = itrte->next;
			if (*h == itrte->ptr)
			{
				*h = NULL;
				free_listptr2(&headp);
				return (indx);
			}
		}

		listt = *h;
		*h = (*h)->next;
		free(listt);
		indx++;
	}

	*h = NULL;
	free_listptr2(&headp);
	return (indx);
}
