#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *present_node;

	while ((present_node = head) != NULL)
	{
		head = head->next;
		free(present_node);
	}
}
