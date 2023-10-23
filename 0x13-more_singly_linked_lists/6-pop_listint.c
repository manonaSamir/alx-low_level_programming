#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to list.
 * Return: number of elements in a list
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL)
		return (0);
	else
	{
		num =(*head)->n;
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
		temp = NULL;

	}
	return (num);
}
