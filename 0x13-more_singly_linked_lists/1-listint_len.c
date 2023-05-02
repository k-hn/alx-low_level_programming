#include "lists.h"
#include <stddef.h>

/**
 * listint_len - calculates the number of elements linked in a list
 *
 * @h: input list
 *
 * Return: the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	int count = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		if (h->n != '\0')
		{
			count += 1;
		}

		h = h->next;
	}

	return (count);
}
