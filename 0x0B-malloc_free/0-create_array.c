#include "main.h"
#include <stdlib.h>
/**
  *create_array - initialize a new array
  *@size: array size
  *@c: init char
  *Return: pointer to the array memory
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

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);

}
