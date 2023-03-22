#include "function_pointers.h"

/**
 * array_iterator - execute functions given as parameters
 * @size: size of the array
 * @action: pointer to a function
 * @array: array of elements
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0, i < size; i++)
		{
			action(array[i]);
		}
	}
}
