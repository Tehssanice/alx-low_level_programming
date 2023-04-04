#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *rand, *temp;

	rand = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = rand;
		*head = temp;
		return (temp);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (rand == NULL || rand->next == NULL)
			return (NULL);

		rand = rand->next;
	}

	temp->next = rand->next;
	rand->next = temp;

	return (temp);
}
