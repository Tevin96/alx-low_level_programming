#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: node
 * Return: sum of all the data (n) of a listint_t linked list
 * 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int listint;

	for (listint = 0; head; head = head->next)
	{
		listint += head->n;
	}
	return (listint);
}
