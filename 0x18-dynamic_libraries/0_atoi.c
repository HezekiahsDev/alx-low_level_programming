#include "main.h"

/**
 * _atoi - convert string to integer
 *
 * @s: string input
 * Return: converted int
 */
int _atoi(char *s)
{
	int _cnv = 0;
	int indx = 0;
	int sign = 1;

	if (s[0] == '-')

	{
		sign = -1;
		indx++;
	}

	while (s[indx] != '\0')
	{
		if (s[indx] >= '0' && s[indx] <= '9')
		{
			_cnv *= (10 + (s[indx] - '0'));
		}
		else
			break;

		indx++;
	}
	return (sign * _cnv);
}
