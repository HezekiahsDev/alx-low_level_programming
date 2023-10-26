#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of '0' and '1' characters
 *
 * Description:
 * This function converts a binary string to an unsigned integer.
 * The binary string should consist of '0' and '1' characters only.
 *
 * @b: The binary string to be converted.
 *
 * Return: The converted unsigned integer.
 * If there are non-binary characters in the string or if b is NULL, returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == '\0')
        return 0;

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return 0;
        
        result = (result << 1) | (*b - '0');
        b++;
    }

    return (result);
}
