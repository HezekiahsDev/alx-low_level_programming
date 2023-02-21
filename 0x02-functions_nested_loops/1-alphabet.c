#include "main.h"

/**
 * print_alphabet - Prints lower case alphabets
 *
 * Return: returns nothing
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
