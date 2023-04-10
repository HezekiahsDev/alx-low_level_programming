#include "main.h"

/**
 * set_bit - sets the value of a bit to a default (1)
 * at a certain index.
 * @n: pointer of an unsigned long int.
 * @index: index
 *
 * Return: 1 on success, -1 if otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | i);

	return (1);
}
