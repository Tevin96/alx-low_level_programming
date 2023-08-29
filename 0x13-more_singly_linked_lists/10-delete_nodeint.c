#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: node
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodeint, *nodeint2;
	unsigned int c;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		nodeint = *head;
		*head = (*head)->next;
		free(nodeint);
		return (1);
	}

	nodeint = *head;
	for (c = 0; c < index - 1; c++)
	{
		if (!nodeint)
			return (-1);
		nodeint = nodeint->next;
	}

	nodeint2 = nodeint->next;
	nodeint->next = nodeint2->next;
	free(nodeint2);

	return (1);
}
