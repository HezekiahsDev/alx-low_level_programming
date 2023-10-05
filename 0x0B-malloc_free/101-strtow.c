#include <stdlib.h>
#include <stdio.h>
/**
 * wordcount - word count for a given string input
 * @string: string
 * Return: word count
 */
int wordcount(char *string)
{
	int id, count, word_count;

	id = 0;
	word_count = 0;

	for (count = 0; string[count] != '\0'; count++)
	{
		if (string[count] == ' ')
			id = 0;
		else if (id == 0)
		{
			id = 1;
			word_count++;
		}
	}

	return (word_count);
}
/**
 * **strtow - take a string input and split to words
 * @str: string input
 * Return: memory of array of words or NULL (fail)
 */
char **strtow(char *str)
{
	char **array, *buf;
	int i, j = 0, slen, words, counts = 0, begin, last;

	for (slen = 0; *(str + slen); slen++)
		;
	words = wordcount(str);
	/*check of there are words*/
	if (words == 0)
		return (NULL);

	/*allocate memory for array of words*/
	array = (char **) malloc(sizeof(char *) * (words + 1));
	/*confirm malloc status*/
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= slen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (counts)
			{
				last = i;
				/*malloc for buffer*/
				buf = (char *) malloc(sizeof(char) * (counts + 1));
				if (buf == NULL)
					return (NULL);
				while (begin < last)
					*buf++ = str[begin++];
				*buf = '\0';
				array[j] = buf - counts;
				j++;
				counts = 0;
			}
		}
		else if (counts++ == 0)
			begin = i;
	}

	array[j] = NULL;

	return (array);
}
