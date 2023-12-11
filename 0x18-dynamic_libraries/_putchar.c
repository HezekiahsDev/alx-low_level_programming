#include <unistd.h>

/**
 * _putchar - send a character to standard output
 * @c: The character
 *
 * Return: 1 if succeed, -1 if an error occured
 * and errno is set appr.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
