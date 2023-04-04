#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 * Return: empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;

	free(temp);

	return (n);
}
