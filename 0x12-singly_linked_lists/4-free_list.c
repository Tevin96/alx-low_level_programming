#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: head of the list
 *
 * Return: 0 (success)
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}
}
