#include "main.h"

/**
 * _strcpy - Copy ine string to  another variable
 * @dest: This is destination
 * @src: This is where to copy from
 *
 * Return: This return copy
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
