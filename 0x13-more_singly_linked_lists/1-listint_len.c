#include "lists.h"

/**
 * listint_len - returns the amount in lenth of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t amount = 0;

	while (h)
	{
		amount++;
		h = h->next;
	}

	return (amount);
}
