#include <stdlib.h>
#include "main.h"
/**
  *array_range - create and array (arranging a set of integers)
  *@min: lowest int value
  *@max: peak int value
  *Return: first byte of the new array
  *or NULL if fail
  */
int *array_range(int min, int max)
{
	int set, index;
	int *array;

	set = 0;

	/*check validity*/
	if (min > max)
		return (NULL);

	set = ((max + 1) - min);

	/*memory allocation*/
	array = malloc(set * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (index = 0; index < set; index++)
	{
		*(array + index) = min + index;
	}

	return (array);
}
