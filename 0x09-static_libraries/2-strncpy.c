#include "main.h"

/**
 * _strncpy - yank a string from word count 0 of destination string
 * @dest: destination
 * @src: source
 * @n: number of characters to copy from an array
 * Return: the new string formed
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
