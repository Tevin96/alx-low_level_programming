#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: node
 * Return: the head node's data (n)
 * 0 if the if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *listint;
	int c;

	if (!*head)
		return (0);
	listint = *head;
	c = listint->n;
	*head = (*head)->next;
	free(listint);
	return (c);
}
