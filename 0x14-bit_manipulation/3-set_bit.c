#include "main.h"

/**
 * set_bit - Sets the value of a bit at a specified index to 1.
 * @n: A pointer to an unsigned long integer.
 * @index: The index of the bit to set (0 to 63).
 *
 * Description: This function sets the bit at the given index in 'n' to 1.
 *
 * Return: 1 if the operation was successful, -1 if the index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	
	*n = *n | (1 << index);
	
	return (1);
}
