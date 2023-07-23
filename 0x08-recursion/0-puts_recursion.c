#include "main.h"
/**
 *_puts_recursion - print string and a new line
 * @s: string to be printed
 *
 * Return: return is void
 */
void _puts_recursion(char *s)
{
	/* test base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
