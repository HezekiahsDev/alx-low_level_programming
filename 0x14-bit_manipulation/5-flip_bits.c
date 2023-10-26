#include "main.h"

/**
 * flip_bits - Counts differing bits between two unsigned long integers.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Description:
 * This function calculates the number of differing bits between two
 * unsigned long integers 'n' and 'm' by counting the bits that need to be flipped
 * to transform 'n' into 'm.
 *
 * Return: The number of bits that need to be flipped to get from 'n' to 'm.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int differingBits = 0;

    while (n || m)
    {
        if ((n & 1) != (m & 1))
            differingBits++;
        n >>= 1;
        m >>= 1;
    }

    return (differingBits);
}
