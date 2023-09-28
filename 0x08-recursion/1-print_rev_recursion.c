#include "main.h"
/**
 * _print_rev_recursion - rec func to print string in reverse
 * @s: string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
