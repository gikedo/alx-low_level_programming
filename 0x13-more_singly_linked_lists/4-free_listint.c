#include "lists.ih"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}

	free(head);
}
