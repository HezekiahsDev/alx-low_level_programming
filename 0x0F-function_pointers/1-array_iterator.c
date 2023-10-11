#include <stdio.h>
/**
  *array_iterator - execute given functions (param)
  *@array: element array
  *@size: array size
  *@action: pointer to function (int)
  *
  *Return: nothing, just void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int indx;

	if (array && size > 0 && action)
	{
		for (indx = 0; indx < size; indx++)
		{
			action(array[indx]);
		}
	}
}
