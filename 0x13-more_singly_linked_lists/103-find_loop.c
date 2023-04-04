#include "lists.h"

/**
 * find_listint_loop - searches for the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop sbegins, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *down = head;
	listint_t *swift = head;

	if (!head)
		return (NULL);

	while (down && swift && swift->next)
	{
		swift = swift->next->next;
		down = down->next;
		if (swift == down)
		{
			down = head;
			while (down != swift)
			{
				down = down->next;
				swift = swift->next;
			}
			return (swift);
		}
	}

	return (NULL);
}
