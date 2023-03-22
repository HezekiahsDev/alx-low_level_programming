#include "main.h"

/**
 * int_index - search for an integer
 * @size: size of the array elements
 * @array: array of integer
 * @cmp: pointer to a function that
 * compares values.
 *
 * Return: inex of first element and
 * -1 if element is not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
