#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list
 *
 * @h: head node of list
 *
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	int difference;
	listint_t *temp_node;
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			count += 1;
		}
		else
		{
			free(*h);
			*h = NULL;
			count += 1;
			break;
		}
	}

	*h = NULL;

	return (count);
}
