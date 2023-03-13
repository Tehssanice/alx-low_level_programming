#include <stdio.h>
#include "main.h"

/**
 * _strdup - Entry point
 * description: returns a pointer to a newly allocated
 * space in memory
 * @str: variable
 *
 * Return: a pointer or NULL if 0
 */

char *_strdup(char *str)
{

	char *clone;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	clone = (char *)malloc((sizeof(char) * size) + 1);
	if (clone == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		clone[i] = str[i];
	clone[size] = '\0';

	return (clone);
}

