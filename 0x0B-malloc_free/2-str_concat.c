#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenate two given strings
 * @s1: string1
 * @s2: string2
 * Return: newly created string or NULL if there's an error
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i = 0, j = 0, lenght1 = 0, lenght2 = 0;

	while (s1 && s1[lenght1])
		lenght1++;
	while (s2 && s2[lenght2])
		lenght2++;
	str = malloc(sizeof(char) * (lenght1 + lenght2 + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < lenght1)
		{
			str[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (lenght1 + lenght2))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';

	return (str);
}
