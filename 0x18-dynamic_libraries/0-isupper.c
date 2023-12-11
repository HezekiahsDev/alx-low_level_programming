#include "main.h"
/**
 * _isupper - find uppercase letter
 * @c: test case
 * Return: if upper return 1,otherwose 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
