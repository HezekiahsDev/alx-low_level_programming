#include "search_algos.h"

/**
  * binary_search - Search for an element in an array using binary search
  * @array: ptr to first element of the array
  * @size: array size
  * @value: Search value
  * vraiables a = left index, b = right index
  *
  * Return: Searcjh value or -1 if not exist (NULL)
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, a, b;

	if (array == NULL)
		return (-1);

	for (a = 0, b = size - 1; b >= a;)
	{
		printf("Searching in array: ");
		for (i = a; i < b; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = a + (b - a) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			b = i - 1;
		else
			a = i + 1;
	}

	return (-1);
}
