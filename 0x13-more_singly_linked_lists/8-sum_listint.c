#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - the sum of all the data (n) of a linked list.
 * @head: pointer to list.
 * Return: number of elements in a list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (!head || !ptr)
		return (0);
	for (; ptr;)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (ptr);
}
