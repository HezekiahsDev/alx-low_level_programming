#include "main.h"

/**
 * _islower - Check for lowercase character.
 * @c: Character to check.
 *
 * Return: 1 if c is lowercase, 0 if its uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
