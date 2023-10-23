#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to list.
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *current = h;

	for (i = 0; current; i++)
	{
		current = current->next;
	}
	return (i);
}
