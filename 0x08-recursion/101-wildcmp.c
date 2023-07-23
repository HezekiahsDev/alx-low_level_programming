#include "main.h"
/**
 * wildcmp - compare strings (like strcmp)
 * @s1: first sting
 * @s2: second string
 * Return: if match 1, else 0.
 */

int wildcmp(char *s1, char *s2)
{
	/* test base case */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
