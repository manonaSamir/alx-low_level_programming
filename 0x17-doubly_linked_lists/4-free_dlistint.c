#include "lists.h"

/**
 * free_dlistint -  frees a list_t list.
 * @head: pointer to list.
 * Return: the address of the new element, or NULL if it failed
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
