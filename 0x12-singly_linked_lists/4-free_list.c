#include "lists.h"

/**
 * free_list - frees the memory allocated to list_t list.
 *
 * @head: pointer to the list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
