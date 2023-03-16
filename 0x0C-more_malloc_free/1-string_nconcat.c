#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Entry point
 * description: concatenates two strings
 * @s1: variable
 * @s2: variable
 * @n: variable
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;

	unsigned int s = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		s++;

	con_str = malloc(sizeof(char) * (s + 1));

	if (con_str == NULL)
		return (NULL);

	s = 0;

	for (i = 0; s1[i]; i++)
		con_str[s++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		con_str[s++] = s2[i];

	con_str[s] = '\0';

	return (con_str);
}
