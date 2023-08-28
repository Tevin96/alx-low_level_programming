#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list of listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	return (number);
}
