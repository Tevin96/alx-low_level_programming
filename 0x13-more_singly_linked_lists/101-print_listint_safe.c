#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * loop_listint_list - length of a loop in a linked list
 * @head: node
 * Return: number of nodes in a loop
 */
size_t loop_listint_list(const listint_t *head)
{
	const listint_t *loop, *list;
	size_t c = 1;

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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: node
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c, safe;

	c = loop_listint_list(head);

	if (!c)
	{
		for (; head != NULL; c++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
	}
	else
	{
		for (safe = 0; safe < c; safe++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (c);
}
