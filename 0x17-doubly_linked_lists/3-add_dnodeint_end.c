#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *lastnode;

	if (!head)
		return (NULL);

	/* malloc and set new node data */
	newnode = malloc(sizeof(struct dlistint_s));
	if (!newnode)
		return (NULL);
	newnode->n = n;

	/* if empty linked list */
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		newnode->prev = NULL;
		return (newnode);
	}

	/* traverse to lastnode node and insert */
	lastnode = *head;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	newnode->next = NULL;
	newnode->prev = lastnode;
	lastnode->next = newnode;

	return (newnode);
}

