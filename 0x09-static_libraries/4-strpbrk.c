#include "main.h"

/**
 * _strpbrk - Search a string for a set of bytes.
 * @s: string to search
 * @accept: string to macth
 * Return: Pointer to the byte in 's' that macthes
 * one of the bytes in "accept". Or NULL if no
 * such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
