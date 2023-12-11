#include "main.h"
/**
 * *_strspn - comput lenght of substring
 * @s: string
 * @accept: string containing the list of characters to macth
 * Return: amount of memory in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;
	int signal;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		signal = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				signal = 1;
			}
		}
		if (signal == 0)
		{
			return (c);
		}
	}

	return (0);
}
