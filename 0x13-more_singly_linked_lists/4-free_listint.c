#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: listint_t list
 * Return: 0 (success)
 */
void free_listint(listint_t *head)
{
	listint_t *listint;

	while (head)
	{
		listint = head;
		head = head->next;
		free(listint);
	}
}
