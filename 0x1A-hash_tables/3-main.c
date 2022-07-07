#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int res;

	ht = hash_table_create(1024);
	res = hash_table_set(ht, "betty", "cool");
	printf("exited with status: %d\n", res);
	return (EXIT_SUCCESS);
}
