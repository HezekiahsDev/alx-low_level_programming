#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copy string and make a duplicate
 * @str: string
 * Return: on success, return pointer to the copy
 * of string. Else, NULL.
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;
	unsigned int lenght = 0;

	if (str == NULL)
		return (NULL);

	while (str[lenght])
		lenght++;

	copy = malloc(sizeof(char) * (lenght + 1));

	if (copy == NULL)
		return (NULL);

	while ((copy[i] = str[i]) != '\0')
		i++;

	return (copy);
}
