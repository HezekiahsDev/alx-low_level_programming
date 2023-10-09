#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _string_lenght - compute string length of a string input
 * @str_input: input string
 * Return: strlen
 */
int _string_lenght(char *str_input)
{
	int len;

	for (len = 0; str_input[len] != '\0'; len++)
		;
	return (len);
}
/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem_ptr;
	int _num, s_len, index, copy;

	_num = n;

	/*check for NULL strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*check for valid bytes*/
	if (_num < 0)
		return (NULL);
	/*check size of bytes*/
	if (_num >= _string_lenght(s2))
		_num = _string_lenght(s2);

	/*check for NULL pointer*/
	s_len = _string_lenght(s1) + _num + 1;

	/*Memory allocation*/
	mem_ptr = malloc(sizeof(*mem_ptr) * s_len);
	/*validate mem alloc*/
	if (mem_ptr == NULL)
		return (NULL);

	/*concatenate*/
	for (index = 0; s1[index] != '\0'; index++)
		mem_ptr[index] = s1[index];
	for (copy = 0; copy < _num; copy++)
		mem_ptr[index + copy] = s2[copy];
	mem_ptr[index + copy] = '\0';

	return (mem_ptr);
}
