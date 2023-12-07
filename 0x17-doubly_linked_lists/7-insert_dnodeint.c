#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer of  list
 * @idx: index to place list
 * @n: value of n
 * Return: return new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *slow = *h, *fast = slow->next, *new_node;
	unsigned int siz = 1;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);

	/* to get the size of the list */
	while (ptr)
	{
		ptr = ptr->next;
		siz++;
	}

	/* insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* insert at the end */
	else if (idx == siz)
		return (add_dnodeint_end(h, n));

	/* check if idx is out of range */
	if (idx > siz)
		return (NULL);

	while ((idx--) - 1)
	{
		slow = slow->next;
		fast = slow->next;
	}

	new_node->n = n;
	new_node->next = fast;
	new_node->prev = slow;
	fast->prev = new_node;
	slow->next = new_node;

	return new_node;
}
