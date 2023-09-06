#include "lists.h"

/**
 * loop_listint_free - length of a loop in a linked list
 * @head: nodes
 * Return: number of nodes in the loop
 */
size_t loop_listint_free(const listint_t *head)
{
	const listint_t *loop, *list;
	size_t c;

	if (!head || !head->next)
		return (0);

	loop = head->next;
	list = head->next->next;

	while (list != NULL)
	{
		if (loop == list)
		{
			loop = head;
			while (loop != list)
			{
				c++;
				loop = loop->next;
				list = list->next;
			}

			loop = loop->next;
			while (loop != list)
			{
				c++;
				loop = loop->next;
			}

			return (c);
		}

		loop = loop->next;
		list = list->next->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: list
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *safe;
	size_t a, c = 0;

	c = loop_listint_free(*h);

	if (c == 0)
	{
		for (a = 0; *h != NULL; a++)
		{
			safe = *h;
			*h = (*h)->next;
			free(safe);
		}
	}
	else
	{
		for (a = 0; a < c; a++)
		{
			safe = *h;
			*h = (*h)->next;
			free(safe);
		}
		*h = NULL;
	}

	h = NULL;

	return (a);
}
