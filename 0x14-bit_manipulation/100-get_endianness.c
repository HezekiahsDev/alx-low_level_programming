#include "main.h"

/**
 * get_endianness - Checks the endianness of the
 * current system.
 *
 * Description
 * This function determines whether the system uses
 * big-endian or little-endian byte order.
 *
 * Return: 0 if the system is big-endian,
 * 1 if the system is little-endian.
 */
int get_endianness(void)
{
    unsigned int value = 1;
    char *byteRepresentation = (char *) &value;

    return ((int) *byteRepresentation);
}

