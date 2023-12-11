#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - look for a set of memory in a string
 * @s: string
 * @accept: byte macthed string
 * Return: pointer to macthed byte
 * or NULL if no macth found
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
