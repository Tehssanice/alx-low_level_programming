#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
	h = h->next;
		node++;
	}
	return (node);
}
