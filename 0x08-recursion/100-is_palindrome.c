#include "main.h"
/**
  * _lenght_of_string - strlen of word input
  * @str: input
  * Return: strlen
**/
int _lenght(char *str)
{
	/* test base case */
	if (*str == '\0')
		return (0);
	return (1 + _lenght_of_string(str + 1));
}

/**
 *pls_check - confirm palindrome
 * @i: count
 * @len: lenght
 * @s: word
 * Return: 1 true 0 false
**/
int pls_check(int i, int len, char *s)
{
	if (len > 0)
	{
		if (s[i] == s[len])
		{
				return (pls_check(i + 1, len - 1, s));
		}
		else if (s[i] != s[len])
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
  * is_palindrome - confirm palindrome string
  * palindrome is a word that read the same back and forth
  * eg. LOL, MADAM..
  * @s: is the string
  * Return: return 1 if the string is a palindrome or 0 otherwise
**/
int is_palindrome(char *s)
{
	return (pls_check(0, _lenght_of_string(s) - 1, s));
}
