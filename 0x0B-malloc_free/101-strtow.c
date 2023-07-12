#include <stdlib.h>
#include "main.h"

/**
 * count_help - count the number of word in a string
 * @s: string
 *
 * Return: word count
 */
int count_word(char *s)
{
	int show = 0;
	int word_count = 0;
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			show = 0;
		else if (show == 0)
		{
			show = 1;
			word_count++;
		}
	}

	return (word_count);
}
/**
 * **strtow - split string into individual word
 * @str: string
 * Return: on success, pointer to string array, else NULL.
 */
char **strtow(char *str)
{
	char **grid, *index;
	int i, k = 0, lenght = 0, word, c = 0, start, end;

	while (*(str + lenght))
		lenght++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	grid = (char **) malloc(sizeof(char *) * (word + 1));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= lenght; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				index = (char *) malloc(sizeof(char) * (c + 1));
				if (index == NULL)
					return (NULL);
				while (start < end)
					*index++ = str[start++];
				*index = '\0';
				grid[k] = index - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	grid[k] = NULL;

	return (grid);
}
