#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node to front of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
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


	newnode->next = *head;
	newnode->prev = NULL;
	(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}

