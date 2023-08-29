#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: node
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 * NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index && head; c++)
	{
		head = head->next;
	}
	return (head);
}
