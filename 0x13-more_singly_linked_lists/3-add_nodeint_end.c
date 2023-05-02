#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node to the end of a list
 *
 * @head: pointer of pointer to head of list
 * @n: int to add to list
 *
 * Return: linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = node;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = node;
	}

	return (*head);
}
