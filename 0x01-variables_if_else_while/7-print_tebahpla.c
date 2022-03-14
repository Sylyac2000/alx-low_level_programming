#include <stdio.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char caracter = 'z';

	while (caracter >= 'a')
	{
		putchar(caracter);
		caracter--;
	}
	putchar('\n');

	return (0);
}
