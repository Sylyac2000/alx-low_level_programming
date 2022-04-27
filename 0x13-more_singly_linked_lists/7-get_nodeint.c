#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: pointer to head pointer of linked list
 * @index: nth node
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;/* the index of the node we're currently looking at*/

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
