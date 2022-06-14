#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1, resp = 0, first;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57); first++)
	{
		if (s[first] == '-')
		{
			sign *= -1;
		}
	}

	for (int i = first; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}
