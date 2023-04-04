#include <stdio.h>
#include "lists.ih"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *voll;

	do {
		voll = head->next;
		free(head);
		head = voll;
	} while (head);
	free(voll);
}
