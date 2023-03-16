#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Entry point
 * description: allocates memory for an array
 * @nmemb: variable
 * @size: variable
 *
 * Return: 0 or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	void *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = malloc(size * nmemb);

	if (b == NULL)
		return (NULL);

	c = b;

	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';

	return (b);
}

