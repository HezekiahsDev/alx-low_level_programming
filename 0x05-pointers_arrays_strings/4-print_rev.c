#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int index;

	/* Set loop to list all the items in the string literal */
	for (index = 0; s[index] != '\0'; index++)
		;
	/* Set loop to read the strings in reverse starting from */
	/*starting from the last character excluding the null*/
	/*Split te strings into individual character*/
	for (index = index - 1; s[index] != '\0'; index--)
	{
	/*Print individual character with _putchar*/
		_putchar(s[index]);
	}
	_putchar('\n');
}
