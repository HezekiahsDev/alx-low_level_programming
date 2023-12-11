#include "main.h"
/**
 * _strncat - combine two strings (concatenate)
 * @dest: patse at the end of this string
 * @src: cut off from this string
 * @n: number of characters to be copied from the array of characters
 * Return: pointer to the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
