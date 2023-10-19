#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * step_through - step next to node.
 * @h: a pointer to a list_t
 * Return: a count for every step through the list.
 */
size_t step_through(const list_t *h)
{
	if (!h->next)
		return (0);
	return (1 + step_through(h->next));
}

/**
 * list_len -  the number of elements in a linked list_t list.
 * @h: pointer to list.
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (!h->next)
		return (1);
	return (1 + step_through(h));
}