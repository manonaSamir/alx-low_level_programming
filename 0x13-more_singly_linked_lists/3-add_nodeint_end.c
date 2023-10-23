#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to list.
 * @n: data
 * Return: number of elements in a list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;
	ptr = (*head);
	temp = malloc(sizeof(listint_t));

	if (temp)
	{
		temp->n = n;
		temp->next = NULL;
		if (*head)
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = temp;
		}
		else
			*head = temp;
		return (temp);
	}
	return (NULL);
}
