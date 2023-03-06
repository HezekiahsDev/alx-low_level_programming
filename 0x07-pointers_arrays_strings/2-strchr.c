#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character to look for
 *
 * Return: Pointer to the first occurence of the character
 * and NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}
	return (s + 1);
}
