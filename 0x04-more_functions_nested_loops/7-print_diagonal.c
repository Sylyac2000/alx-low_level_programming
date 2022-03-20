#include "main.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int x, y, espace = 2;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 2; y < espace; y++)
		{
			_putchar(' ');
		}
		espace++;
		_putchar('\\');
		_putchar('\n');
	}
}

