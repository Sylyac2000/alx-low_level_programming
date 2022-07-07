#include "hash_tables.h"

/**
 * hash_table_print - print key/values of whole hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current;
	char *ponctuation = "";

	if (!ht || !ht->array)
		return;
	putchar('{');

	while (index < ht->size)
	{
		current = ((ht->array)[index]);
		while (current)
		{
			printf("%s'%s': '%s'", ponctuation, current->key, current->value);
			ponctuation = ", ";
			current = current->next;
		}
		index++;
	}

	puts("}");

}
