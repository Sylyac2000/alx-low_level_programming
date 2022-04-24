#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t list_len(const list_t *h)
{

	size_t cnt = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{

		cnt++;
		current_node = current_node->next;

	}

	return (cnt);

}
