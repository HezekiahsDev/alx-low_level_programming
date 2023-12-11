#include "main.h"
#include <stdio.h>
/**
 * *_strstr - search for a substring
 * @haystack: where to look
 * @needle: substring to search for
 * Return: pointer the first letter of the substring
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
