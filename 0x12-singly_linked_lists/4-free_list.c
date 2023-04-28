#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free single linked list
 *
 * @head: head of linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
