#include "main.h"
/**
 * _strcat - join two strings together (concatenate)
 * @dest: to be concated
 * @src: string be added
 * Return: pointer to new string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
