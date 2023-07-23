#include "main.h"
/**
 * _strlen_recursion - string lenght ith recursive functions
 * @s: pointer to string.
 *Return: string lenght (similar to strlen)
 */
int _strlen_recursion(char *s)
{
	/* test base case */
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
