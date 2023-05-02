#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked_list
 *
 * @head: head node of list
 *
 * Return: reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
