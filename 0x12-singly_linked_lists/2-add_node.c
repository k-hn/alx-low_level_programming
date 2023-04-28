#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: head 
 * @str: string to add
 *
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_length = 0;

	if (str == NULL)
	{
		str_length = 0;
	}

	while (str[str_length] != '\0')
	{
		str_length += 1;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Initialise the next addr of new_node */
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	new_node->str = strdup(str);
	new_node->len = str_length;
	*head = new_node;

	return (*head);
}
