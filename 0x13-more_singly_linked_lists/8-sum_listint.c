#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - sums all data of linked list
 *
 * @head: head node of list
 *
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
