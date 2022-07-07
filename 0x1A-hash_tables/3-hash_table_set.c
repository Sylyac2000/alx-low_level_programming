#include "hash_tables.h"

/**
 * free_noeud - Free a node.
 * @noeud: Node to free.
 *
 * Return: Void.
 */
void free_noeud(hash_node_t *noeud)
{
	free(noeud->key);
	free(noeud->value);
	free(noeud);
}

/**
 * hash_table_set - Set a value in the hash table.
 * @ht: hash table.
 * @key: Key
 * @value: Value to set in hash table.
 *
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nv_noeud, *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	nv_noeud = malloc(sizeof(hash_node_t));
	if (nv_noeud == NULL)
		return (0);
	nv_noeud->key = strdup(key);
	nv_noeud->value = strdup(value);
	nv_noeud->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = nv_noeud;
	else
	{
		current = ht->array[index];
		if (strcmp(current->key, key) == 0)
		{
			nv_noeud->next = current->next;
			ht->array[index] = nv_noeud;
			free_noeud(current);
			return (1);
		}
		while (current->next != NULL && strcmp(current->next->key, key) != 0)
		{ current = current->next;
		}
		if (strcmp(current->key, key) == 0)
		{
			nv_noeud->next = current->next->next;
			free_noeud(current->next);
			current->next = nv_noeud;
		}
		else
		{
			nv_noeud->next = ht->array[index];
			ht->array[index] = nv_noeud;
		}
	}
	return (1);
}
