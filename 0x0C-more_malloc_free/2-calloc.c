#include <stdlib.h>
#include "main.h"
/**
  * _calloc - mem allocation to an array using malloc
  * @nmemb: elements in an array (count)
  * @size: array size
  * Return: return pointer to allocated mem
  * or NULL if malloc fail
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc_ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc_ptr = malloc(nmemb * size);
	if (alloc_ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		*((char *)(alloc_ptr) + index) = 0;
	}

	return (alloc_ptr);
}
