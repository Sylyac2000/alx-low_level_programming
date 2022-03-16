#include <stdio.h>

/**
 *main - print the first 50 fibonacci numbers
 *Return: 0 Always success.
 */

int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c;
	int i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i < 49)
		{
		printf("%ld, ", c);
		}
		else
			printf("%ld\n", c);
	}
	return (0);
}
