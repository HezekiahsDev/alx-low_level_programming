#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concat arguments
 * @ac: argument index
 * @av: argument array
 * Return: if ac is 0 or av is NULL,return pointer to newly created string.
 * else NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *argc;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	argc = malloc((sizeof(char) * size) + 1);
	if (argc == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			argc[k] = av[i][j];
			j++;
			k++;
		}
		argc[k] = '\n';
		k++;
		i++;
	}
	argc[k] = '\0';
	return (argc);
}
