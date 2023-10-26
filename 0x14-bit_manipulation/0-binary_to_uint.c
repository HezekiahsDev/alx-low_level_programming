#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of '0' and '1' characters
 *
 * Description
 * This function converts a binary string to an unsigned integer.
 * The binary string should consist of '0' and '1' characters only.
 *
 * b>>>The binary string to be converted
 *
 * Return: The converted unsigned integer.
 * If there are non-binary characters in the string or if b is NULL, returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int length = 0;
    int base = 1;

    if (!b)
        return (0);

    while (b[length] != '\0')
        length++;

    for (length--; length >= 0; length--, base *= 2)
    {
        if (b[length] != '0' && b[length] != '1')
            return (0);

        if (b[length] & 1)
            result += base;
    }

    return (result);
}

