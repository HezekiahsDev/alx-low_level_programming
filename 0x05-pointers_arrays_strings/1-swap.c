#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: this is the first entry
 * @b: this is the second entry
 *
 *
 */
void swap_int(int *a, int *b)
{
	int i;
	int j;

	/* Assign the value of pointers to another variable */
	i = *a;
	j = *b;
	/* Swap the values of the pointers */
	*a = j;
	*b = i;
}
