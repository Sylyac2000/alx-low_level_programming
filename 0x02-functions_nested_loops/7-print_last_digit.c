#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{

	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
