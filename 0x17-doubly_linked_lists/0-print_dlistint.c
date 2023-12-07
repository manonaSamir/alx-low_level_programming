#include "lists.h"

/**
 * print_dlistint - all the elements of a list_t list.
 * @h: pointer to list.
 * Return: number of elements in a list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t add_nodes = 0;

	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
		add_nodes++;
	}
	return (add_nodes);
}
