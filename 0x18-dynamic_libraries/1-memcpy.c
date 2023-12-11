#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: destiny
 * @src: source
 * @n: amount of mem to copy
 * Return: destiny
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		dest[mem] = src[mem];
	}

	return (dest);
}
