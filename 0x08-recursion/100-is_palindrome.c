#include "main.h"
/**
  * con_len - confirm string length
  * @string: strings
  * Return: return reaults
**/
int con_len(char *string)
{
	if (*string == '\0')
		return (0);
	return (1 + con_len(string + 1));
}

/**
 * con_pal - confirm palindrome
 * @index: index
 * @len: string lenght
 * @str: string to check
 * Return: results
**/
int con_pal(int index, int len, char *str)
{
	if (len > 0)
	{
		if (str[index] == str[len])
		{
			return (con_pal(index + 1, len - 1, str));
		}
		else if (str[index] != str[len])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
 * is_palindrome - is a string input palindrome?
 * @s: str in
 * Return: results
**/
int is_palindrome(char *s)
{
	return (con_pal(0, con_len(s) - 1, s));
}
