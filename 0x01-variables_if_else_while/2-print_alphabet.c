#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char caracter = 'a';

	while (caracter <= 'z')
	{
		putchar(caracter);
		caracter++;
	}
	putchar('\n');

	return (0);
}
