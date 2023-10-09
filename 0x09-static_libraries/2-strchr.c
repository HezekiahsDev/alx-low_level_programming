#include "main.h"
#include <stdio.h>
/**
 * *_strchr - find a char within a string literal
 * @s: string
 * @c: char
 * Return: if it exist return the first character
 * else, NULL.
 */
char *_strchr(char *s, char c)
{
		int find;

		while (1)
		{
			find = *s++;
			if (find == c)
			{
				return (s - 1);
			}
			if (find == 0)
			{
				return (NULL);
			}
		}
}
