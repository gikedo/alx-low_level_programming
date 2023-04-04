#include <stdio.h>
#include "lists.h"
/**
 *print_listint-displays every elements
 *of a linked list
 *@h:linked list of type listint_t to display
 *Return:amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t amount = 0;

	do {
		printf("%d\n", h->n);
		amount++;
		h = h->next;
	} while (h);
	return (amount);
}
