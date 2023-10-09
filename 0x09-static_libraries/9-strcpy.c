#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destiny
 * @src: source
 * Return: return the copy of string
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
