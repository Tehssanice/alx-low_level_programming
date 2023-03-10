#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Entry point
 * description: searches a string for a set of bytes
 * @accept: variable
 * @s: variable
 *
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
