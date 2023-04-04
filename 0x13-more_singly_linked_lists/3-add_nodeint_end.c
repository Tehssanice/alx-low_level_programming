#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - add node at the end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *temp, *last;

        temp = malloc(sizeof(listint_t));

        if (temp == NULL)
                return (NULL);

        else{
                temp->n = n;
		temp->next = NULL;
        };

	if (*head == NULL)
		*head = temp;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

        return (*head);
}
