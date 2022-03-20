#include "main.h"

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (x + y <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
