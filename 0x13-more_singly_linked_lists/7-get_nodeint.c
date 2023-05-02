#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 *
 * @head: head node of list
 * @index: index to find
 *
 * Return: the nth node or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);
}
