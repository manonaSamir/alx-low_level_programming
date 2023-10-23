#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - all the elements of a list_t list.
 * @h: pointer to list.
 * Return: number of elements in a list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
