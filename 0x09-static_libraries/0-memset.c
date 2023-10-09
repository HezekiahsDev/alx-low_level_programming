#include "main.h"
/**
 * *_memset - set memory to a fixed size
 * @s: memory
 * @b: copy
 * @n: frequency
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		s[mem] = b;
	}

	return (s);
}
