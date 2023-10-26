#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specified index.
 * @n: The input unsigned long integer.
 * @index: The index of the bit to retrieve (0 to 63).
 *
 * Description: This function returns the value (0 or 1) of the bit at the given index in 'n'.
 *
 * Return: The value of the bit at the specified index or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index > 63)
        return (-1);

    return ((n >> index) & 1);
}

