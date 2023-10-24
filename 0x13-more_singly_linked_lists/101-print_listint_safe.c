#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to list.
 * Return: pointer to the first node of the reversed list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, j;
	const listint_t *current = head;
	const listint_t *pervious = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		i++;
		current = current->next;
		pervious = head;

		for (j = 0; j < i; j++)
		{
			if (current == pervious)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (i);
			}
			pervious = pervious->next;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
