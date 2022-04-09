#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * _strlen - find length of string
 * @s: pointer to  string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*(s++) != '\0')
		l++;
	return (l);
}
/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: a argv
 * Return: true only if entire string is a number, false if not
 */

bool is_num(char *argvv)
{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - multiply two positive numbers
 * @argc: number of arguments
 * @argv: pointer to strings *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	/* check all arguments to mul numbers */
	while (i < argc)
	{
		if (is_num(argv[i]))
			res *= atoi(argv[i]);
		else
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}
	printf("%d\n", res);
	return (0);
}
