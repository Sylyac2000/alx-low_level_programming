#include "lists.h"

/**
 * _strlen - find string length
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
 * add_node_end - add node to end of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp; /* create new node */
	char *dup;

	new_node = malloc(sizeof(list_t)); /* malloc for new node */
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}


	new_node->str = dup; /* set node values */
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL) /* if no list nodes, set new_node to beginning */
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
