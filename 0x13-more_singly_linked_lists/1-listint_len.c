#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t listint_len(const listint_t  *h)
{

	size_t cnt = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{

		cnt++;
		current_node = current_node->next;

	}

	return (cnt);

}
