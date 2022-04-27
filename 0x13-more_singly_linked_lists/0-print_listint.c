#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t print_listint(const listint_t *h)
{

	size_t cnt = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{

		printf("%d\n", current_node->n);
		cnt++;
		current_node = current_node->next;

	}

	return (cnt);

}
