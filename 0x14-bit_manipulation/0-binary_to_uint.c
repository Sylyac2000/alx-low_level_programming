#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	for (sum = 0; *b; b++)
	{
		if (*b == '1')
			sum = (sum << 1) | 1;
		else if (*b == '0')
			sum <<= 1;
		else
			break;
	}
	return (sum);
}
