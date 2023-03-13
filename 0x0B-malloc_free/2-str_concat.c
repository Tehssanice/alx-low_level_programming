#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Entry point
 * description: concatenates two strings
 * @s1: variable
 * @s2: variable
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, new_index = 0, size = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		size++;

	new_str = malloc(sizeof(char) * size);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new_str[new_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		new_str[new_index++] = s2[i];

	return (new_str);
}
