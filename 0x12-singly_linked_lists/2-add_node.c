#include "lists.h"

/**
 * _strlen - calculate string length
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node - add node to beginning of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	/* 1. allocate node */
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL) /*check if strdup malloc errored */
		return (NULL);
	

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	/* 2. put in the data  */
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	/* 3. Make next of new node as head */
	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	/* 4. move the head to point to the new node */
	*head = new_node;

	return (new_node);

}
