#include "main.h"
#include <stdlib.h>
/**
  *argstostr - join all the arguments for a program and
  *make them into one string
  *@ac: arg index
  *@av: array of arg
  *Return: if ac or av is 0, return NULL (failure)
  *else, return new memory string (success)
  */
char *argstostr(int ac, char **av)
{
	int a, b, c, catsize;
	char *arguments;

	/* check validity of arguments */
	catsize = 0;
	c = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			catsize++;
			b++;
		}
		catsize++;
		a++;
	}
	/* allocate memory for new string */
	arguments = malloc((sizeof(char) * catsize) + 1);
	/*check malloc status*/
	if (arguments == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			arguments[c] = av[a][b];
			b++;
			c++;
		}
		arguments[c] = '\n';
		c++;
		a++;
	}
	arguments[c] = '\0';
	return (arguments);
}
