#include "lists.h"

/**
 * add_nodeint_end introduces a node at the buttom of a linked list
 * @head: pointer to the first element in the list
 * @n: data to put into the new element
 *
 * Return: pointer to the fresh node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *voll = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	while (voll->next)
		voll = voll->next;

	voll->next = fresh;

	return (fresh);
}
