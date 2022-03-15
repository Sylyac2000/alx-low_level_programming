#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * n;
	else
		r = n;

	_putchar( (r % 10) + '0' );

	return (r % 10);
}
