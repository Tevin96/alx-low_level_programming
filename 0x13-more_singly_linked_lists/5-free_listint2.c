#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t list
 * Return: 0 (success)
 */
void free_listint2(listint_t **head)
{
	listint_t *listint2;

	if (head == NULL)
		return;
	while (*head)
	{
		listint2 = *head;
		*head = (*head)->next;
		free(listint2);
	}
	*head = NULL;
}
