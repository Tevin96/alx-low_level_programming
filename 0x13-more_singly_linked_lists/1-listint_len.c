#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: elements in a linked listint_t list
 * Return: 0 (success)
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
