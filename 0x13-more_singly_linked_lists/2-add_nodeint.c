#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @h: pointer to list.
 * Return: number of elements in a list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp)
	{
		temp->n = n;
		temp->next = NULL;

		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (NULL);
}
