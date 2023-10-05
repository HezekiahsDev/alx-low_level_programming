#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *str_concat - join (concatinate two strings)
  *at the end of the new string, there must be a NULL
  *@s1: first string
  *@s2: second string.
  *Return: ponter to the fitdt byte of new string
  *the two strings and a NULL byte
  *However if there is a failure, return NULL
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int slen_1, slen_2, catsize, i, j;
	char *cat;

	/* check strings status */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (slen_1 = 0; s1[slen_1] != '\0'; slen_1++)
		;
	for (slen_2 = 0; s2[slen_2] != '\0'; slen_2++)
		;

	catsize = slen_1 + slen_2;

	/* allocate memory to cat */
	cat = malloc((sizeof(char) * catsize) + 1);
	/*check malloc status*/
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < slen_1; i++)
	{
		cat[i] = s1[i];
	}
	j = 0;
	while (i <= catsize)
	{
		cat[i] = s2[j];
		i++;
		j++;
	}
	return (cat);
}
