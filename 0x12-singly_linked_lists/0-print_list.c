#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{

	size_t cnt = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current_node->len, current_node->str);
		cnt++;
		current_node = current_node->next;

	}

	return (cnt);

}
