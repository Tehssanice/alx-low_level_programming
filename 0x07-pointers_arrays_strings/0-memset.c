#include "main.h"

/**
 * _memset - Entry point
 * description: fills memory with a constant byte
 * @n: variable
 * @s: variable
 * @b: variable
 *
 *  Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}

