#include "lists.h"

/**
 * sum_listint - calculates the addition of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting addition
 */
int sum_listint(listint_t *head)
{
	int join = 0;
	listint_t *voll = head;

	do {
		join += voll->n;
		voll = voll->next;
	} while (voll)

	return (join);
}
