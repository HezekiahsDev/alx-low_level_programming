#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at certain indexes
 * @n: pointer of an unsigned long int
 * @index: index
 *
 * Return: 1 on success, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
