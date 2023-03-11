#include "main.h"

/**
 * _strspn - search a sring for a set of bytes (substrings)
 * @s: character array
 * @accept: character array to check bytes from
 *
 * Return: Number of bytes in the initial segement of 's'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int a;

	i = 0;
	a = 0;
	while (s[i]  != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (a);
}
