#include "main.h"

/**
 * _isalpha - Check if character is an  alphabet.
 * @c: character
 *
 * Return: if it is an alphabet, return 1.
 * else return 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
	|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
