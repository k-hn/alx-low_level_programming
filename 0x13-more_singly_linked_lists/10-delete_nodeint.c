#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at an index
 *
 * @head: head node of list
 * @index: index of node to delete
 *
 * Return: 1 if success, or -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *current_node = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while(count < index - 1)
	{
		if (!temp_node || !(temp_node->next))
		{
			return (-1);
		}

		temp_node = temp_node->next;
		count += 1;
	}

	current_node = temp_node->next;
	temp_node->next	 = current_node->next;
	free(current_node);

	return (1);
}
