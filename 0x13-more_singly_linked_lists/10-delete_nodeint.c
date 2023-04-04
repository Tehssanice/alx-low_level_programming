#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *rand;
	unsigned int i;

	rand = *head;

	if (rand == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(rand);

		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (rand->next == NULL)
			return (-1);

		rand = rand->next;
	}

	temp = rand->next;
	rand->next = temp->next;
	free(temp);

	return (1);
}
