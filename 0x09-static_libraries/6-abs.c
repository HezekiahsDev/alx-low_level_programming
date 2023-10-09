#include "main.h"

/**
 * _abs - Get the absolute value of a number
 * @n: numbet
 *
 * Return: Absolute value
 */
int _abs(int n)
{
	int abs;

	if (n < 0)
	{
		abs = n * -1;
	}
	else if (n == 0)
	{
		abs = n * 0;
	}
	else
	{
		abs = n * 1;
	}
	return (abs);
}
