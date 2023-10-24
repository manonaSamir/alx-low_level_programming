#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - prints a listint_t linked list.
 * @h: pointer to list.
 * Return: pointer to the first node of the reversed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int diff;
	listint_t *temp;

	if (!h)
		return (0);

	for (; *h;)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
