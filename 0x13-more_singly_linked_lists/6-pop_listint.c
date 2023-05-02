#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of linked list
 *
 * @head: head node of list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int premier_node;
	listint_t *temp_node;
	listint_t *next_node;

	if (*head == NULL)
	{
		return (0);
	}

	temp_node = *head;
	next_node = temp_node->next;
	premier_node = temp_node->n;

	free(temp_node);
	*head = next_node;

	return (premier_node);
}
