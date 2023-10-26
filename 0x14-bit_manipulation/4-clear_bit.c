#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a specified index to 0.
 * @n: A pointer to an unsigned long integer.
 * @index: The index of the bit to clear (0 to 63).
 *
 * Description: This function sets the bit at the given index in 'n' to 0, effectively clearing it.
 *
 * Return: 1 if the operation was successful, -1 if the index is out of range.
 */
/*int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    unsigned long int m = 1UL << index;

    if (*n & m)
        *n ^= m;

    return (1);
}*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > 63)
		return (-1);

	val = 1 << index;

	if (*n & val)
		*n ^= val;

	return (1);
}
