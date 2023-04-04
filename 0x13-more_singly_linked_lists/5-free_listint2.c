#include "lists.h"

/**
 * free_listint2 - frees specific linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *voll;

	if (head == NULL)
		return;

	do
	{
		voll = (*head)->next;
		free(*head);
		*head = voll;
	}
	while (*head);

	*head = NULL;
}
