#include "hash_tables.h"

/**
 * hash_table_delete - Delete the hash table.
 * @ht: Hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			while (ht->array[index] != NULL)
			{
				current = ht->array[index]->next;
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				free(ht->array[index]);
				ht->array[index] = current;
			}
		}
	}
	free(ht->array);
	free(ht);
}
