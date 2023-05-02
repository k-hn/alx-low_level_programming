#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 *
 * @head: head node of list
 *
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_node = NULL;
	const listint_t *list_n = NULL;
	size_t count = 0;
	size_t new_n;

	temp_node = head;
	while (temp_node)
	{
		printf("[%p] %d\n", (void *)temp_node, temp_node->n);
		count += 1;
		temp_node = temp_node->next;
		list_n = head;
		new_n = 0;
		while (new_n < count)
		{
			if (temp_node == list_n)
			{
				printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
				return (count);
			}

			list_n = list_n->next;
			new_n += 1;
		}

		if (!head)
		{
			exit(98);
		}
	}
	return (count);
}
