#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t list = 0;
	int chan;
	listint_t *voll;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		chan = *h - (*h)->next;
		if (chan > 0)
		{
			voll = (*h)->next;
			free(*h);
			*h = voll;
			list++;
		}
		else
		{
			free(*h);
			*h = NULL;
			list++;
			break;
		}
	}

	*h = NULL;

	return (list);
}
