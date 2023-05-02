#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of a list
 *
 * @head: pointer of pointer to head
 * @n: int to add to head
 *
 * Return: linked list with addition to head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		node->next = NULL;
	}
	else
	{
		node->next = *head;
	}

	node->n = n;
	*head = node;

	return (*head);
}
