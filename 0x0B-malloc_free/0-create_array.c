#include "main.h"
#include <stdlib.h>
/**
  *create_array - initialize a new array of character
  *with a specific character
  *@size: array size
  *@c: initialize with
  *Return: pointer to the array block of memory
  *or NULL on failure
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	/* check if memory can exist before malloc */
	if (size == 0)
	{
		return (NULL);
	}
	/* allocate appropriate memory for array */
	array = malloc(sizeof(char) * size);

	/* check malloc status (succes of fail) */

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

}
