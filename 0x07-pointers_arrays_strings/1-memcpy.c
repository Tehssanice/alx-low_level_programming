#include "main.h"

/**
 * _memcpy - Entry point
 * description: copies memory area
 * @n: variable
 * @dest: variable
 * @src: variable
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
