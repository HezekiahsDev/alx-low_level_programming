#include "main.h"
/**
 * _strlen - length of a string
 * @s: this is the input string
 * Return: string length
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
