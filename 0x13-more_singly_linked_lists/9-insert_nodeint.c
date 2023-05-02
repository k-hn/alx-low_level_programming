#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: head node
 * @idx: index
 * @n: n
 *
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node;
	unsigned int count;

	current_node = *head;
	new_node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	for (count = 0; head != NULL && count < idx - 1; count++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
		{
			return (NULL);
		}
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if(current_node->next)
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
	}
	else
	{
		new_node->next = NULL;
		current_node->next = new_node;
	}

	return (new_node);
}
