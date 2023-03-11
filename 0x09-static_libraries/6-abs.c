#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @n: Integer to work on.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	int absolute_value;

	if (n < 0)
	{
		absolute_value = n * -1;
	}
	else if (n == 0)
	{
		absolute_value = n * 0;
	}
	else
	{
		absolute_value = n * 1;
	}
	return (absolute_value);
}
