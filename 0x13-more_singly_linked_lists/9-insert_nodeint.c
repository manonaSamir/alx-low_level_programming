#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to list.
 * @idx: index where the new node is added
 * @n:data to insert in the new node
 * Return: number of elements in a list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;

	listint_t *ptr2 = malloc(sizeof(listint_t));

	if (!ptr2 || !head)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;
	if (idx == 0)
	{
		ptr2->next = (*head);
		(*head) = ptr2;
		return (ptr2);
	}
	while (idx != 1)
	{
		if (!ptr)
		{
			free(ptr2);
			return (NULL);
		}
		ptr = ptr->next;
		idx--;
	}

	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
