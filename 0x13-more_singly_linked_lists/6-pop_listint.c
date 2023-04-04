#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @head: pointer to the start element in the linked list
 *
 * Return: the data inside the elements that was removed,
 * or 0 if the list is blank.
 */
int pop_listint(listint_t **head)
{
	listint_t *voll;
	int amount;

	if (!head || !*head)
		return (0);

	amount = (*head)->n;
	voll = (*head)->next;
	free(*head);
	*head = voll;

	return (amount);
}
