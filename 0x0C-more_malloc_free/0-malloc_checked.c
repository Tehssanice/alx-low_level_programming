#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * description: allocates memeory using malloc
 * @b: variable
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
