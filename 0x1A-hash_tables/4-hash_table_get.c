#include "hash_tables.h"

/**
 * hash_table_get - Get a value from the hash table given key.
 * @ht: hash table.
 * @key: Key.
 *
 * Return: The value if ok, NULL if not.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *noeud_actu;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	noeud_actu = ht->array[index];
	if (noeud_actu == NULL)
		return (NULL);
	while (strcmp(noeud_actu->key, key) && noeud_actu != NULL)
	{
		noeud_actu = noeud_actu->next;
	}
	if (noeud_actu == NULL)
		return (NULL);
	else
		return (noeud_actu->value);
}
