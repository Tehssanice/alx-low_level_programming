#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list.
 * @head: pointer to the address of
 *        the head of the list_t list.
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *old;

	if (head == NULL || *head == NULL)
		return (NULL);

	old = NULL;

	while ((*head)->next != NULL)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}

	(*head)->next = old;

	return (*head);
}
