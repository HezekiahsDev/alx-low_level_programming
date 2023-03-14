#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * and initializes it with a specific character
 * @size: size of array.
 * @c: char to initialize array with.
 *
 * Return: pointer to array or  NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	
	/* checke if memory allocation was successful */
	
	if (arr = NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
