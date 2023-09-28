#include "main.h"

/**
 * _strlen_recursion - rec func to print strlen
 * @s: strings
 *
 * Return: strlen (value)
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
