#include "search_algos.h"

/**
  * linear_search - Linear search for a value of an element in an array
  * @array: ptr to first wlwment of the array
  * @size: array size
  * Return: The index of the search or NULL if not exist
  *
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

}
