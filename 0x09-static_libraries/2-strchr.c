#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 *
 * description: locates a character in a string
 *
 * @c: variable
 *
 * @s: variable
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
