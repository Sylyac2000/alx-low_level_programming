#include "main.h"
#include <stdio.h>
/**
 * prime_factor 
 * @n: number
 * Return: void
 */
void prime_factor(int n)
{
	if (n > 0)
	{
		prime_factor(n / 10);
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		prime_factor(n / 10);
		_putchar((n % 10) + '0');
	}
}
