#include "main.h"

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

	int taille = n; /* only accept positive sizes */

	if (taille > 0)
	{
		int i;

		for (i = 0; i < taille; i++)
			s[i] = b;
	}

	return (s);
}
