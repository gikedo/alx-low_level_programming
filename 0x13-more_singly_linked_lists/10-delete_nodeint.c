#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *voll = *head;
	listint_t *active = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(voll);
		return (1);
	}

	do
	{
		if (!voll || !(voll->next))
			return (-1);
		voll = voll->next;
		i++;
	}
	while (i < index - 1);

	active = active->next;
	voll->next = active->next;
	free(active);

	return (1);
}
