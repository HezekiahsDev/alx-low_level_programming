#include "main.h"
#include <stdlib.h>
/**
  *create_array - initialize a new array of characters
  *@size: size
  *@c: character
  *Return: pointer to array or NULL on error
  */
char *create_array(unsigned int size, char c)
{
	char *init;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	init = malloc(sizeof(char) * size);

	/* is malloc successful? */

	if (init == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		init[i] = c;
	}

	return (init);

}
