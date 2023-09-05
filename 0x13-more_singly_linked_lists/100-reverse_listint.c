#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse, *next;

	if (!head || !*head)
		return (NULL);

	reverse = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = next;
	}
	*head = reverse;

	return (*head);
}
