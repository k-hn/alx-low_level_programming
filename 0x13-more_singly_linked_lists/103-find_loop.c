#include "lists.h"
#include <stddef.h>

/**
 * find_listint_loop - finds the loop of a linked list
 *
 * @head: head node of linked list
 *
 * Return: address of node where loop is, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *outer = head;
	listint_t *inner = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (outer && inner && inner->next)
	{
		inner = inner->next->next;
		outer = outer->next;
		if (inner == outer)
		{
			outer = head;
			while (outer != inner)
			{
				outer = outer->next;
				inner = inner->next;
			}
			return (inner);
		}
	}

	return (NULL);
}
