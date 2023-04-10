#include "main.h"

/**
 * binary_to_uint - converts a base 2 number to an
 * unsigned int.
 * @b: base 2.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_2;

	/* check for the validiy of b */
	/* if not valid, return 0 */
	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_2 = 1; len >= 0; len--, base_2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_2;
		}
	}

	return (ui);
}
