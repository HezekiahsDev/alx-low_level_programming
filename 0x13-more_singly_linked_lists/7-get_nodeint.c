#include "lists.h"
/**
 * get_nodeint_at_index - search engine for nodes at an index
 * @head: head node
 * @index: search index
 * Return: pointer to search result
 * or NULL on error (node does not exist)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t srch;

for (srch = 0; (srch < index) && (head->next); srch++)
head = head->next;

if (srch < index)
return (NULL);

return (head);
}
