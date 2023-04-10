#include "main.h"

/**
 * get_endianness - check size of endian
 *
 * Return: 0 if  endian is big, 1 if endian is little
 */
int get_endianness(void)
{
	unsigned int n;
	char *c;

	n = 1;
	c = (char *) &n;

	return ((int)*c);
}
