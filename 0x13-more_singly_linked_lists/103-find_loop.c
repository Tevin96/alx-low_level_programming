#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: node
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *list;

	loop = list = head;
	while (list != NULL)
	{
		loop = loop->next;
		list = list->next->next;
		if (loop == list)
		{
			loop = head;
			while (loop != list)
			{
				loop = loop->next;
				list = list->next;
			}
			return (loop);
		}
	}
	return (NULL);
}
