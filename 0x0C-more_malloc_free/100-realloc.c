#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Entry point
 * description: reallocates a memory block using malloc
 * and free
 * @ptr: variable
 * @old_size: variable
 * @new_size: variable
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	char *old = ptr;
	unsigned int i, new = new_size;

	if (ptr == NULL)
	{
		c = malloc(new_size);

		return (c);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	c = malloc(new_size);

	if (c == NULL)
		return (NULL);

	if (new_size > old_size)
		new = old_size;

	for (i = 0; i < new; i++)
		c[i] = old[i];
	free(ptr);

	return (c);
}
