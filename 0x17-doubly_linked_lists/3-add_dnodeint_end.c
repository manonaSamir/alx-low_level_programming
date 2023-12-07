#include "lists.h"

/**
 * add_dnodeint_end - all the elements of a list_t list.
 * @head: pointer to list.
 * @n: needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tube;

	tube = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	while (tube->next)
	{
		tube = tube->next;
	}
	new->prev = tube;
	tube->next = new;
	return (new);
}
