#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: linked list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;
	
	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		h = h->next;
		count += 1;
	}

	return (count);
}
