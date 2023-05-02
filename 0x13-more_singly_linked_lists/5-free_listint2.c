#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t list
 *
 * @head: pointer to pointer to list head
 */

void free_listint2(listint_t **head)
{
	listint_t *present_node;
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	present_node = *head;
	while ((temp = present_node) != NULL)
	{
		present_node = present_node->next;
		free(temp);
	}

	*head = NULL;
}
