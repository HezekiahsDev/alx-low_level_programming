#include "main.h"
#include <stdlib.h>
/**
  *_strdup - duplicate a string
  *@str: pointer to string to be duplicated
  *Return: on success, return pointer to the
  *copy of string.
  *on failure/insufficient memory, return NULL
  */
char *_strdup(char *str)
{
	char *dup;
	unsigned int slen, i;

	/* confirm if string exist */
	if (str == NULL)
	{
		return (NULL);
	}

	slen = 0;
	while (str[slen] != '\0')
	{
		slen++;
	}

	/* allocate memory for duplicate string */
	dup = malloc(sizeof(char) * (slen + 1));

	/* confir malloc status */
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < slen; i++)
	{
		dup[i] = str[i];
	}
	dup[slen] = '\0';
	return (dup);

}
