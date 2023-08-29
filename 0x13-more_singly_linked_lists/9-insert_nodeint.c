#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: node
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 * Return: address of the new node, or NULL if it failed
 * NULL if it is not possible to add the new node at index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *index;
	unsigned int c;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	index = *head;
	for (c = 0; c < idx - 1; c++)
	{
		if (!index)
		{
			free(newnode);
			return (NULL);
		}
		index = index->next;
	}

	newnode->next = index->next;
	index->next = newnode;

	return (newnode);
}
